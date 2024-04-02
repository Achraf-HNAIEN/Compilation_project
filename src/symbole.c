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
                  int lineNumber) {}

Symbol* findSymbol(SymbolTable* table, const char* name) {}

void deleteSymbolTable(SymbolTable* table) {}