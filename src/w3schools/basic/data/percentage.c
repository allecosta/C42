#include <stdio.h>

/**
* Calcula a porcentagem de score de um usuario em relação ao score maximo do jogo
*/

int main() {

    int maxScore = 500, userScore = 423;
    float percentage = (float) userScore / maxScore * 100;
    printf("Porcentagem do usuário é %.2f\n", percentage);

    return 0;
}