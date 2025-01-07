#include <stdio.h>

int main() {

    int numbers[] = {4, 10, 12 ,25};
    printf("%d\n", numbers[2]); // 12

    numbers[0] = 2;
    printf("%d\n", numbers[0]); // 2


    for (int i = 0; i < 4; i++) {
        printf("%d\n", numbers[i]); // 2, 10, 12, 25
    }

    int numbers2[3];

    numbers2[0] = 99;
    numbers2[1] = 10;
    numbers2[2] = 6;

    for (int x = 0; x < 3; x++) {
        printf("%d\n", numbers2[x]);
    }
 


    return 0;
}