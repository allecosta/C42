#include <stdio.h>

int main() {

    // Conversao implicita (automatica) de int para float
    float myFloat1 = 9;
    printf("%f\n", myFloat1); // 9.000000

    // Conversao implicita (automatica) do float para int
    int num1 = 9.99;
    printf("%d\n", num1); // 9

    int num2 = 5, num3 = 2;
    int div1 = num2 / num3;
    printf("%d\n", div1); // 2. Por que 2 e não 2.5? Vamos entender...

    float div2 = 5 / 2; // 5 e 2 são valores inteiros
    printf("%f\n", div2); // 2.000000

    // Conversao explicita (manualmente) de int para float
    int num4 = 5, num5 = 2;
    float div3 = (float) num4 / num5; // Isso em java chamamos de casting
    printf("%.1f\n", div3); // 2.5 

    return 0;
}