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