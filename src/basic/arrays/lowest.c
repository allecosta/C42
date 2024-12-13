#include <stdio.h>

int main() {

    int ages[] = {68, 67, 87, 70, 26, 48, 35, 18, 22, 20};
    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestAge = ages[0];

    for (int i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }

    printf("Menor idade: %d\n", lowestAge); // Menor idade: 18

    return 0;
}