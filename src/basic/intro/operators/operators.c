#include <stdio.h>
#include <stdbool.h>

int main() {

    // Operadores aritmetico ( + - * / % ++ -- )
    int sum1 = 10 + 4; 
    int sum2 = sum1 + 25; 
    int sum3 = sum2 + sum2;
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);  

    // Operadores de atribuição ( = += -= *= /= %= &= |= ^= >>= <<= )
    int x = 10;
    x += 25;
    printf("%d\n", x);

    // Operador de comparacao ( == != > < >= <= )
    int y = 4;
    int z = 10;
    bool result = y > z;
    printf("%d\n", result);

    // Operadores logico ( && || !)

    return 0;
}