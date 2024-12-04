#include <stdio.h>

int main() {

    for (int i = 1; i <= 2; i++ ) {
        printf("%d\n", i); // Executa duas vezes

        for (int j = 1; j <= 3; j++) {
            printf("%d\n", j); // Executa três vezes
        }
    }
    
    return 0;
}