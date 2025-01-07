#include <stdio.h>

int main() {

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }

        printf("%d\n", i);
    }

    for (int x = 0; x < 10; x++) {
        if (x == 5) {
            continue;
        }

        printf("%d\n", x);
    }


    int y = 0;

    while (y < 10) {
        if (y == 5) {
            break;
        }

        printf("%d\n", y);
        y++;
    }

    int z = 0; 

    while (z < 10) {
        if (z == 4) {
            continue;
        }

        printf("%d\n", z);
        z++;
    }

    return 0;
}