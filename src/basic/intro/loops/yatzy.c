#include <stdio.h>

int main() {

    int dice = 1;

    while (dice <= 4) {
        if (dice < 4) {
            printf("não é Yatzy\n");
        } else {
            printf("é Yatzy\n");
        }

        dice = dice + 1;
    }

    return 0;
}