#include <stdio.h>

int main(void) 
{
    double x;
    double y = sizeof x + 4;
    printf("%.f\n", y); // 12. Porque um double possui o tamanho de 8 bytes

    // Determinando o número de elementos de um array
    int numbers[] = {4, 10, 25};
    int result = sizeof numbers / sizeof numbers[0];
    printf("%d\n", result); // 3

    // Verificando o tamanho de tipos de dados
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%.0f\n", sizeof(double));

    return 0;
}