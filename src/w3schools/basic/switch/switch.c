#include <stdio.h>

int main() {

    int day = 3;

    switch (day) {
        case 0:
            printf("Domingo");
            break;
        case 1:
            printf("Segunda-feira");
            break;
        case 2:
            printf("Terça-feira");
            break;
        case 3:
            printf("Quarta-feira");
            break;
        case 4:
            printf("Quinta-feira");
            break;
        case 5:
            printf("Sexta-feira");
            break;
        case 6:
            printf("Sábado");
            break;
        default:
            printf("OPS! Este dia não existe.");
    }
    
    return 0;
}