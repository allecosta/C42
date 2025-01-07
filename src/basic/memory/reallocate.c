#include <stdio.h>
#include <stdlib.h> 

int main () {

    int *point1, *point2, size;
    size = 4 * sizeof(*point1);
    point1 = malloc(size);
    printf("%d bytes alocado no endereço %p\n", size, point1);
    size = 6 * sizeof(*point1);
    point2 = realloc(point1, size);
    printf("%d bytes realocado no endereço %p\n", size, point2);

    int *point3, *point4;
    size = 8;
    point3 = malloc(4);
    point4 = realloc(point3, size);

    if (point4 == NULL) {
        printf("Falha! Não foi possivel redimensionar a memória.");
    } else {
        printf("Sucesso! %d bytes reallocado no endereço %p\n", size, point4);
        point3 = point4;
    }

    free(point1); // Liberando alocação de memória

    //printf("%d", point1);

    return 0;
}