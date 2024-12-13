#include <stdio.h>

int main() {

    int matrix[3][4] = {{9, 8, 7, 6}, {5, 4, 3, 2}, {1, 0, 1, 2}};
    printf("%d\n", matrix[0][3]); // 6

    matrix[2][3] = 25;
    printf("%d\n", matrix[2][3]); // 25

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d", matrix[i][j]); // 9876543210125
        }
    }

    return 0;
}