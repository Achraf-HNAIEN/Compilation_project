
#include "symbole.h"

#include <stdio.h>
#include <stdlib.h>


int intialisSymboleTable() {
    Symbole symboleTable = (Symbole *)malloc(sizeof(Symbole));
    symboleTable->size = 0;
    symboleTable->capacity = 10;
    symboleTable->symboles = malloc(sizeof(Symbole) * symboleTable->capacity);
    return 0;
}