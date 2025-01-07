#include <stdio.h>

void funcName(char name[]) {
    printf("Olá, %s\n", name);
}

void funcNameIdade(char name[], int age) {
    printf("Olá, %s. Você tem  %d anos de idade.\n", name, age);
}

void sum(int x, int y) {
    int sum = x + y;
    printf("Soma de %d + %d = %d\n", x, y, sum);
}

void funcNumbers(int numbers[4]) {
    for (int i = 0; i < 4; i++) {
        printf("%d\t", numbers[i]);
    }
}

int multiplication(int j, int z) {
    return j * z;
}

float divide(int r, int s) {
    return r / s;
}

int sub(int m, int n) {
    return m - n;
}

int main() {

    funcName("Rosa Maria");
    funcName("José Maria");

    funcNameIdade("Moacir", 18);

    sum(4, 10);
    sum(10, 25);
    sum(25, 50);

    printf("Resultado: %d\n", multiplication(8, 9));
    printf("Resultado: %.2f\n", divide(100, 15));

    int result1 = sub(28, 5);
    int result2 = sub(2, 8);
    int result3 = sub(22, 19);

    printf("Resultado: %d\n", result1);
    printf("Resultado: %d\n", result2);
    printf("Resultado: %d\n", result3);

    // Uma outra forma de fazer o example anterior utilizando array
    int resultSub[3];
    resultSub[0] = sub(88, 7);
    resultSub[1] = sub(13, 5);
    resultSub[2] = sub(12, 12);

    for (int a = 0; a < 3; a++) {
        printf("Resultado: %d\n", resultSub[a]);
    }

    int numbers[4] = {4, 10, 25, 12};
    funcNumbers(numbers);

    return 0;
}