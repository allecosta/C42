#include <stdio.h>

int main (void) {

    unsigned int x = 4;
    unsigned int y = -x;

    //Isto é um caso de overflow de inteiro, porque um tipo "unsigned" não pode armazenar número negativo.
    printf("%u\n", y);  // 4.294.967,292

    unsigned int z = y + y;
    printf("%u\n", z);

    return 0;
}