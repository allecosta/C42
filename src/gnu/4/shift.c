#include <stdio.h>

int main (void) {

    int x = 5 << 2;
    int y = 5 >> 2;
    printf("%d\n", x); // 20
    printf("%d\n", y); // 1

    int a, b, c, d;
    int var1 = a + (b << 5);
    int var2 = (c + d) << 5;
    printf("%d\n", var1); // 0
    printf("%d\n", var2); // 0

    unsigned int day = 12;
    unsigned int month = 6;
    unsigned int year = 1993;
    unsigned int date = (((year << 4) + month) << 5) + day;
    printf("%d\n", date); // 1020620

    return 0;
}