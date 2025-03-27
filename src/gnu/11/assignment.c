#include <stddef.h>
#include <stdlib.h> // Biblioteca que disponibiliza a função malloc (alocação de memória dinâmica)

struct point 
{
    double x, y;
};

struct point *copy_point(struct point point) 
{
    struct point *ptr = (struct point *) malloc(sizeof(struct point));

    if (ptr == NULL) {
        return 1;
    }
    *ptr = point;

    return ptr;
};
