#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbole.h"

void initSymbolTable(SymbolTable* table) {
  table->head = NULL;
  table->size = 0;
}

Symbol* addSymbol(SymbolTable* table,
                  const char* name,
                  SymbolType type,
                  int dataType,
                  int lineNumber) {
  Symbol* newSymbol = (Symbol*)malloc(sizeof(Symbol));
  if (!newSymbol)
    return NULL;
  newSymbol->name = strdup(name);
  newSymbol->type = type;
  newSymbol->dataType = dataType;
  newSymbol->lineNumber = lineNumber;
  newSymbol->next = NULL;
  if (!table->head) {
    table->head = newSymbol;
  } else {
    newSymbol->next = table->head;
    table->head = newSymbol;
  }
  table->size++;
  return newSymbol;
}

Symbol* findSymbol(SymbolTable* table, const char* name) {
  Symbol* current = table->head;
  while (current) {
    if (strcmp(current->name, name) == 0) {
      return current;
    }
    current = current->next;
  }
  return NULL;
}

void deleteSymbolTable(SymbolTable* table) {
  Symbol* current = table->head;
  Symbol* next;
  while (current) {
    next = current->next;
    free(current->name);
    free(current);
    current = next;
  }
  table->head = NULL;
  table->size = 0;
}

Symbol* checkAndAddSymbol(SymbolTable* table, const char* name, SymbolType type, DataType dataType, int lineNumber) {
    Symbol* foundSymbol = findSymbol(table, name);
    if (foundSymbol == NULL) { // Symbol not found, so add it
        return addSymbol(table, name, type, dataType, lineNumber);
    }
    return foundSymbol; // Symbol already exists, no need to add
}
void fillGlobalSymbolTable(SymbolTable* table, Node* ast) {
    if (ast == NULL) return;
    if (ast->label == VariableDeclaration && ast->scopeLevel == 0) { // Assuming scopeLevel 0 for global
        checkAndAddSymbol(table, ast->ident, VARIABLE, ast->dataType, ast->lineno);
    }
    for (Node* child = ast->firstChild; child != NULL; child = child->nextSibling) {
        fillGlobalSymbolTable(table, child); // Recursively fill table with child nodes
    }
}


void processFunctionDeclaration(Node* functionNode) {
    SymbolTable parameterTable;
    SymbolTable localVariableTable;
    initSymbolTable(&parameterTable);
    initSymbolTable(&localVariableTable);

    // Assuming you have a way to separate parameters and local variables within a functionNode
    for (Node* param = functionNode->parameters; param != NULL; param = param->nextSibling) {
        checkAndAddSymbol(&parameterTable, param->ident, PARAMETER, param->dataType, param->lineno);
    }

    for (Node* localVar = functionNode->localVariables; localVar != NULL; localVar = localVar->nextSibling) {
        checkAndAddSymbol(&localVariableTable, localVar->ident, VARIABLE, localVar->dataType, localVar->lineno);
    }

// Assuming `functionNode` is the root of a function's AST
// and parameters and local variables are directly under it
Node* current = functionNode->firstChild;
while (current != NULL) {
    if (current->label == Parameter) {
        // Add parameter to parameterTable
        checkAndAddSymbol(&parameterTable, current->ident, PARAMETER, current->dataType, current->lineno);
    } else if (current->label == VariableDeclaration) {
        // Add local variable to localVariableTable
        checkAndAddSymbol(&localVariableTable, current->ident, VARIABLE, current->dataType, current->lineno);
    }
    current = current->nextSibling;
}
}
void traverseAST(Node* ast) {
    if (ast == NULL) return;
    
    if (ast->label == FunctionDeclaration) {
        processFunctionDeclaration(ast);
        // Further processing for the function body here, with access to the filled symbol tables
    }
    
    // Recurse on children and siblings
    traverseAST(ast->firstChild);
    traverseAST(ast->nextSibling);
}
