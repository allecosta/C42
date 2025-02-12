#include <stdio.h>

int main (void) 
{
    int r = 4, x = 10, y = 25;

    if ((r != 0 && x % r == 0) || (y != 0 && y == 0)) {
        puts("\nPelo menos um foi verdadeiro!");
    } else {
        puts("\nAmbos resultados foram falsos!");
    }

    if (!(r == 0) && (x % r == 0)) {
        puts("\nNeste caso para ser verdadeiro, precisa que ambos sejam verdadeiros");
    } else {
        puts("\nPelo menos um foi falso!");
    }

    // Utilizando ternario
    (x >= 0) ? puts("\nx é maior que zero") : puts("\nx é menor ou igual a zero");

}