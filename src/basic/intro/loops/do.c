#include <stdio.h>

int main() {

    int i = 0;

    do {
        printf("%d\t", i);
        ++i;
    } while (i < 10);

    return 0;
}