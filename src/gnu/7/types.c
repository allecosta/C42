#include <stdio.h>
#include <stdint.h>

// Tipo void não retorna valor
void print_if_positive(double x, double y) 
{
    if (x <= 0) {
        return;
        //printf("%.1f\n", x);
    }

    if (y <= 0) {
        return;
        printf("%.1f\n", y);
    }
}

int main(void) 
{
    // signed -> -128 a 127
    int16_t a = 1000;
    int32_t b = 1000;
    int64_t c = 1000;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    // unsigned -> 0 a 255
    uint16_t x = 1000;
    uint32_t y = 1000;
    uint64_t z = 1000;
    
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    // Tipos de dados complexo
    _Complex double bar1;
    _Complex long double foo1 = 4.0 + 3.0i;

    double bar2 = __real__ foo1; 
    double bar3 = __imag__ foo1; 

    printf("%.1f\n", bar2); // 4.0
    printf("%.1f\n", bar3); // 3.0

    print_if_positive(2.2, 0.0);
}