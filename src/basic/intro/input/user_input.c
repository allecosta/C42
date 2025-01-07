#include <stdio.h>

int main() {

    int number1;
    printf("Informe um número: ");
    scanf("%d", &number1);
    printf("Número: %d\n\n", number1);

    int number2;
    char character;
    printf("Informe um número, uma letra e pressione enter: \n");
    scanf("%d %c", &number2, &character);
    printf("Número: %d\n", number2);
    printf("Letra: %c\n\n", character);

    char firstName[15];
    printf("Informe o seu primeiro nome: ");
    scanf("%s", firstName);
    printf("Nome: %s\n\n", firstName);

    char fullName[30];
    printf("Informe o seu nome completo: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Nome completo: %s", fullName);

    return 0;
}