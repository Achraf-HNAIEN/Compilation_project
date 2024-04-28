#include "symbole.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initSymbolTable(SymbolTable* table) {
  table->head = NULL;
  table->size = 0;
}

void deleteSymbolTable(SymbolTable* table) {
  Symbol* current = table->head;
  Symbol* next;

  while (current != NULL) {
    next = current->next;
    free(current->name);
    free(current);
    current = next;
  }

  table->head = NULL;
  table->size = 0;
}

Symbol* addSymbol(SymbolTable* table,
                  const char* name,
                  SymbolType type,
                  DataType dataType,
                  int scopeLevel,
                  int lineNumber) {
  Symbol* newSymbol = (Symbol*)malloc(sizeof(Symbol));
  if (!newSymbol)
    return NULL;

  newSymbol->name = strdup(name);
  newSymbol->type = type;
  newSymbol->dataType = dataType;
  newSymbol->scopeLevel = scopeLevel;
  newSymbol->lineNumber = lineNumber;
  newSymbol->next = table->head;
  table->head = newSymbol;
  table->size++;

  return newSymbol;
}

void removeSymbol(SymbolTable* table, const char* name) {
  Symbol **current = &table->head, *temp;

  while (*current != NULL) {
    if (strcmp((*current)->name, name) == 0) {
      temp = *current;
      *current = (*current)->next;
      free(temp->name);
      free(temp);
      table->size--;
      return;
    }
    current = &(*current)->next;
  }
}

void clearScope(SymbolTable* table, int scopeLevel) {
  Symbol **current = &table->head, *temp;

  while (*current != NULL) {
    if ((*current)->scopeLevel == scopeLevel) {
      temp = *current;
      *current = (*current)->next;
      free(temp->name);
      free(temp);
      table->size--;
    } else {
      current = &(*current)->next;
    }
  }
}

Symbol* findSymbol(const SymbolTable* table, const char* name) {
  Symbol* current = table->head;

  while (current != NULL) {
    if (strcmp(current->name, name) == 0) {
      return current;
    }
    current = current->next;
  }

  return NULL;
}

Symbol* findSymbolByType(const SymbolTable* table, SymbolType type) {
  Symbol* current = table->head;

  while (current != NULL) {
    if (current->type == type) {
      return current;
    }
    current = current->next;
  }

  return NULL;
}

Symbol* findSymbolByScope(const SymbolTable* table, int scopeLevel) {
  Symbol* current = table->head;

  while (current != NULL) {
    if (current->scopeLevel == scopeLevel) {
      return current;
    }
    current = current->next;
  }

  return NULL;
}

void updateSymbol(Symbol* symbol,
                  DataType dataType,
                  int numParams,
                  bool isDefined) {
  if (symbol != NULL) {
    symbol->dataType = dataType;
    symbol->numParams = numParams;
    symbol->isDefined = isDefined;
  }
}

void printSymbolTable(const SymbolTable* table) {
  Symbol* current = table->head;
  printf("Symbol Table:\n");
  while (current != NULL) {
    printf("Name: %s, Type: %d, DataType: %d, ScopeLevel: %d, LineNumber: %d\n",
           current->name, current->type, current->dataType, current->scopeLevel,
           current->lineNumber);
    current = current->next;
  }
}

void printSymbolDetails(const Symbol* symbol) {
  if (symbol != NULL) {
    printf("Details for symbol '%s':\n", symbol->name);
    printf("Type: %d, DataType: %d, ScopeLevel: %d, LineNumber: %d\n",
           symbol->type, symbol->dataType, symbol->scopeLevel,
           symbol->lineNumber);
  }
}


void exitScope(SymbolTable* table, int scopeLevel) {
  clearScope(table, scopeLevel);
}