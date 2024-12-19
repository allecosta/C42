#include <stdio.h>

void funcNumberOne(); //  Declarando função 
void funcNumberTwo();

int main () {

    funcNumberOne();

    return 0;
}

void funcNumberOne() { // Definindo função
    puts("Definindo a função 1 que foi declarada acima da main.\n");
    funcNumberTwo();
}

void funcNumberTwo() {
    puts("Definindo a função 2 que foi declarada acima de main\n");
}

