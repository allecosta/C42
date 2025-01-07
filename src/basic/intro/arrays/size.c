#include <stdio.h>

int main() {

    int numbers[] = {10, 25, 50, 75, 100};
    printf("%d\n", sizeof(numbers)); // 20? Porque é 4 x 5. O integer é 4 bytes e o tamanho do arrays é 5.

    int length = sizeof(numbers) / sizeof(numbers[0]); // Calculando o tamnanho do array.
    printf("%d\n", length); // 5

    for (int i = 0; i < length; i++) {
        printf("%d\t", numbers[i]);
    }

    return 0;
}