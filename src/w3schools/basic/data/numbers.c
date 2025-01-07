#include <stdio.h>

int main() {

    int num = 5000;
    float floatNum = 46.75;
    double doubleNum = 10.99;
    printf("%d\n", num);
    printf("%f\n", floatNum);
    printf("%lf\n", doubleNum);
    
    float f1 = 34e4;
    double d1 = 25E3;
    printf("%f\n", f1);
    printf("%lf\n", d1);

    return 0;
}