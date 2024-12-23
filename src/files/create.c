#include <stdio.h>

int main () {

    FILE *fPointer = fopen("archive.txt", "w");
    fclose(fPointer);

    
    /*
    * Para criar um arquivo em um diretrorio especifico, precisa passar o path absoluto:
    *
    * Windows:
    * fPointer = fopen("C:\\nomeDoDiretorio\\arquivo.txt", "w");
    *
    * Linux:
    *  
    */

    return 0;
}