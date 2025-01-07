#include <stdio.h>

float toCelsius(float fahrenheit) {
    float result = (5.0 / 9.0) * (fahrenheit - 32.0);
    return result;
}

int main () {

    float fahrValue = 98.8;
    printf("Fahrenheit: %.2f\n", fahrValue);

    float result = toCelsius(fahrValue);
    printf("Fahrenheit para Celsius: %.2f", result);
    
    return 0;
}