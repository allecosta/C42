#include <stdio.h>

void helloWorld() {
    puts("Olá Mundo C !!\n");
}

void sum() {
    int x = 10, y = 25;
    int sum = x + y;
    printf("Resultado: %d\n", sum);

}

int main() {

    helloWorld();
    sum();
    
    return 0;
}