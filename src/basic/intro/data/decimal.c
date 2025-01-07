#include <stdio.h>

int main() {

    float floatNum1 = 4.6;
    double doubleNum = 25.99;
    printf("%f\n", floatNum1); // 4.600000
    printf("%lf\n", doubleNum); // 25.990000

    float floatNum2 = 10.5; 
    printf("%f\n", floatNum2); // 10.500000
    printf("%.1f\n", floatNum2); // 10.5
    printf("%.2f\n", floatNum2); // 10.50

    return 0;
}