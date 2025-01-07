#include <stdio.h>

int main () {

    FILE *fPointer;
    
    // Criando um novo arquivo
    fPointer = fopen("archive.txt", "w");
    fprintf(fPointer, "Olá Mundo C ;-)");

    // Adicionando uma nova linha no archive.txt
    fPointer = fopen("archive.txt", "a");
    fprintf(fPointer, "\nInserindo uma nova linha.");
    fclose(fPointer);

    return 0;
}