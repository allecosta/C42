#include <stdio.h>

int main() {

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt)); // 4
    printf("%lu\n", sizeof(myFloat)); // 4
    printf("%lu\n", sizeof(myDouble)); // 8
    printf("%lu\n", sizeof(myChar)); // 1

    return 0;
}