#ifndef SYMBOL_H
#define SYMBOL_H

#include <stdbool.h>

// Definition of symbol types
typedef enum { VARIABLE, FUNCTION, PARAMETER } SymbolType;

typedef enum { INT, CHAR } DataType;

// Structure for a symbol
typedef struct Symbol {
  char* name;         // Name
  SymbolType type;    // Symbol type (variable, function, parameter)
  DataType dataType;  // Data type (int, char)
  int address;        // Address in memory
  int scopeLevel;     // Symbol scope level
  int lineNumber;     // Line number in source code
  struct Symbol* next;
} Symbol;

typedef struct {
  Symbol* head;  // Pointer to the first symbol in the list
  int size;      // Number of symbols in the table
} SymbolTable;

// Functions for symbol table management
void initSymbolTable(SymbolTable* table);
Symbol* addSymbol(SymbolTable* table,
                  const char* name,
                  SymbolType type,
                  int dataType,
                  int lineNumber);
Symbol* findSymbol(SymbolTable* table, const char* name);
void deleteSymbolTable(SymbolTable* table);

#endif
