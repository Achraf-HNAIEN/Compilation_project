#ifndef SYMBOL_H
#define SYMBOL_H

#include <stdbool.h>

typedef enum { VARIABLE, FUNCTION, PARAMETER, GLOBAL_VARIABLE } SymbolType;
typedef enum { INT, CHAR} DataType;

typedef struct Symbol {
  char* name;
  SymbolType type;
  DataType dataType;
  int address;
  int scopeLevel;
  int lineNumber;
  struct Symbol* next;
  int numParams;
  struct Symbol* params;
  bool isDefined;
} Symbol;

typedef struct SymbolTable {
  Symbol* head;
  int size;
} SymbolTable;

void initSymbolTable(SymbolTable* table);
void deleteSymbolTable(SymbolTable* table);

Symbol* addSymbol(SymbolTable* table,
                  const char* name,
                  SymbolType type,
                  DataType dataType,
                  int scopeLevel,
                  int lineNumber);
void removeSymbol(SymbolTable* table, const char* name);
void clearScope(SymbolTable* table, int scopeLevel);

Symbol* findSymbol(const SymbolTable* table, const char* name);
Symbol* findSymbolByType(const SymbolTable* table, SymbolType type);
Symbol* findSymbolByScope(const SymbolTable* table, int scopeLevel);

void updateSymbol(Symbol* symbol,
                  DataType dataType,
                  int numParams,
                  bool isDefined);

void printSymbolTable(const SymbolTable* table);
void printSymbolDetails(const Symbol* symbol);

void enterScope(SymbolTable* table, int scopeLevel);
void exitScope(SymbolTable* table, int scopeLevel);

#endif
