#include <stdio,h>
#include <stdlib.h>

/*
* Exemplos de casos que podem ocorrer vazamento de memória;
*
* Exemplo 1: O ponteiro existe somente dentro da função;
* Exemplo 2: O ponteiro é sobrescrito; 
* Exemplo 3: O ponteiro é perdido quando a realocação falha.
*/

void funcRealloc() {
    int *point1;
    point1 = malloc(sizeof(*point1));
}

int main () {

    // Exemplo 1
    funcRealloc();
    puts("Função encerrada.\n");

    // Exemplo 2
    int x = 4;
    int *point2;
    point2 = calloc(2, sizeof(*point2));
    point2 = &x;

    // Exemplo 3
    int *point3;
    point3 = malloc(sizeof(point3));
    point3 = realloc(point3, 2 * sizeof(*point3));

    return 0;
}