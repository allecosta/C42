#include <stdio.h>

int main () {

    int age1 = 25;
    printf("%d\n", age1); // 25
    printf("%p\n", &age1); // 0x7ffc6374eeec50

    int age2 = 50;
    int *point = &age2;
    printf("%d\n", age2); // 50
    printf("%p\n", &age2); // 0x7ffc6374eee8
    printf("%p\n", point); // 0x7ffc6374eee8

    int age3 = 75;
    int *pt = &age3;
    printf("%p\n", pt); // 0x7ffc6374eee4
    printf("%d", *pt); // 75

    return 0;
}