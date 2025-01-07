#include <stdio.h>

int main() {

    int numbers[5] = {3, 12, 10, 25, 4};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]); // 3, 12 , 10, 24, 4
    }

    // Imprimindo os endereços de memória dos valores dentro do array
    for (int j = 0; j < 5; j++) {
        printf("%p\n", &numbers[j]);
    }

    // Imprimindo o tamanho de memória do tipo INT e do array numbers[]
    int testINT;
    printf("%lu\n", sizeof(testINT)); // 4

    printf("%lu\n", sizeof(numbers)); // 20. Porque 4 x 5 = 20

    // Acessando o primeiro elemento do array usando ponteiros
    printf("%d\n", *numbers); // 3 

    // Acessando o demais elementos do array com incremento do ponteiro
    printf("%d\n", *(numbers + 1)); // 12
    printf("%d\n", *(numbers + 2)); // 10
    printf("%d\n", *(numbers + 3)); // 25
    printf("%d\n", *(numbers + 4)); // 4

    // Acessando o demais elementos do array com loop
    for (int x = 0; x < 5; x++) {
        printf("%d\n", *(numbers + x)); // 3, 12 , 10, 24, 4
    }

    // Modificando os elementos do array com ponteiros
    *numbers = 13;
    *(numbers + 1) = 100;
    printf("%d\n", *numbers); // 13
    printf("%d\n", *(numbers + 1)); // 100

    for (int y = 0; y < 5; y++) {
        printf("%d\n", *(numbers + y)); // 13, 100 , 10, 25, 4
    }

    return 0;
}