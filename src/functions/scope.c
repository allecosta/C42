#include <stdio.h>

int y = 10; // Variável de escopo global, ou seja, acessada de qualquer lugar.

void funcNumber1() {
    printf("%d\n", y);
}

void funcNumber2() {
    int x = 4; // Variável de escopo interno, ou seja, acessada somente dentro da função.
    printf("%d\n", x);
}

void funcIncrement() {
    printf("%d\n", ++y); // Alterando o valor de y
}

int main() {

    funcNumber2(); // 4
    funcNumber1(); // 10
    
    printf("O valor de y é %d\n", y); // 10

    funcIncrement(); // 11

    return 0;
}