#include <stdio.h>

int main () {

    int varInt;
    float varFloat;
    double varDouble;
    char varChar;

    printf("%lu bytes\n", sizeof(varInt)); // 4 bytes
    printf("%lu bytes\n", sizeof(varFloat)); // 4 bytes
    printf("%lu bytes\n", sizeof(varDouble)); // 8 bytes
    printf("%lu byte\n", sizeof(varChar)); // 1 byte

    return 0;
}