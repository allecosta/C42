#include <stdio.h>

#define NSTATES 50
#define NYEARS ((2024 - 1900) + 1)  // Define uma constante em tempo de compilação

int statepop[NSTATES][NYEARS];  

int main(void) 
{
    int total = 0;

    for (int state = 0; state < NSTATES; ++state) {
        for (int year = 0; year < NYEARS; ++year) {
            total += statepop[state][year];
        }
    }

    float average = (float)total / NYEARS;  // Evita divisão inteira

    printf("Média: %.2f\n", average);
    
    return 0;
}
