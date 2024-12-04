#include <stdio.h>

int main() {

    int x = 40, y = 10;

    if (x > y) {
        printf("A variavel x é maior que y!\n");
    }

    int time1 = 19;

    if (time1 < 18) {
        printf("Bom tarde!\n");
    } else {
        printf("Boa noite!\n");
    }

    int time2 = 22;

    if (time2 < 12) {
        printf("Bom dia!\n");
    } else if (time2 < 19) {
        printf("Boa tarde!\n");
    } else {
        printf("Boa noite!\n");
    }

    return 0;
}