#include <stdio.h>

int main() {

    puts("***");

    for (int i = 0; i <= 25; i++) {
        printf("%d\n", i); // 0... 25
    }

    puts("***");

    for (int y = 0; y <= 50; y = y + 2) {
        printf("%d\n", y); // 0, 2, 4, 6... 50
    }

    puts("***");

    for (int x = 2; x <= 512; x *= 2) {
        printf("%d\n", x); // 2, 4, 8, 16, 32, 64, 128, 256 e 512
    }

    return 0;
}