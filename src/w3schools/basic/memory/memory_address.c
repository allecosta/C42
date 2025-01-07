#include <stdio.h>

int main() {

    char name[10] = "Rosa";
    printf("%p\n", &name); // 0x7ffeefebf7b6 Esse é o endereço (que pode variar), de memória onde o valor da variável foi salvo.

    return 0;
}