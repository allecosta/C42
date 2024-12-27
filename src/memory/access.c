#include <stdio.h>
#include <stdlib.h>

int main () {

    int *point1;
    point1 = calloc(4, sizeof(*point1));
    *point1 = 4;
    point1[1] = 10;
    point1[2] = 25;
    printf("%d\n", *point1);
    printf("%d\t %d\t %d\n", point1[1], point1[2], point1[3]);

    int *point2 = malloc(4);
    char *point3 = (char*) point2;
    point2[0] = 1684234849;
    printf("%d é\t %c %c %c %c", *point2, point3[0], point3[1], point3[2], point3[3]);

    return 0;
}