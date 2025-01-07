#include <stdio.h>

int main() {

    int i = 0;

    while (i < 10) {
        printf("%d\n", i);
        i++;
    }

    int x = 0;

    while (x <= 10) {
        printf("%d\t", x);
        x += 2;
    }

    return 0;
}