#include <stdio.h>

int main() {

    int ages[] = {46, 40, 39, 38};
    float average, sum = 0;

    int length = sizeof(ages) / sizeof(ages[0]);

    for(int i = 0; i < length; i++) {
        sum += ages[i];
    }

    average = sum / length;
    printf("Média: %.2f\n", average); // Média: 40.75

    return 0;
}