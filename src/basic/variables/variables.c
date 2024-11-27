#include <stdio.h>

int main() {

    char letter = 'A';
    int number1 = 4;
    float number2;
    number2 = 99.8;
    printf("%d\n", number1);
    printf("%f\n", number2);
    printf("%c\n", letter);
    printf("Meu número favorito é %d\n", number1);
    printf("Meu número é %d e minha letra é %c\n", number1, letter);

    int number3 = 10;
    number1 = number3;
    printf("%d\n", number1);

    int number4;
    number4 = number1;
    printf("%d\n", number4);

    float number5 = number2;
    printf("%f\n", number5);

    int sum = number1 + number3;
    printf("%d\n", sum);

    int x = 4, y = 10, z = 25;
    printf("%d\n", x + y + z);

    float b, c, r;
    b = c = r = 10.0;
    printf("%f\n", b);
    printf("%f\n", b + c + r);

    int studentID = 1;
    int studentAge = 30;
    char studentGrade = 'A';
    printf("ID: %d\n", studentID);
    printf("Idade: %d\n", studentAge);
    printf("Grade: %c", studentGrade);

    return 0;
}