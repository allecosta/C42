#include <stdio.h>
#include <stdbool.h>

int main() {

    int myAge = 30, votingAge = 16;

    if (myAge >= votingAge) {
        printf("Maior de idade, pode votar!\n"); 
    } else {
        printf("Menor de idade, aind não pode votar!\n"); 
    }

    return 0;
}