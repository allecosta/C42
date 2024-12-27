#include <stdio.h>
#include <stdlib.h>

int main () {

    int *point1;
    point1 = malloc(sizeof(*point1));

    if (point1 == NULL) {
        puts("Não foi possivel alocar memória");
        return 1;
    }

    *point1 = 20;
    printf("%d\n", *point1); // 20

    // Liberando memória
    free(point1);

    // Boa prática para finalizar a liberação de memória
    point1 = NULL;

    printf("%d\n", point1); // 0

    return 0;
}