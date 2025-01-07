#include <stdio.h>

int main() {

    FILE *fPointer;
    fPointer = fopen("archive.txt", "r");
    char textLocal[100];

    if (fPointer != NULL) {
        while (fgets(textLocal, 100, fPointer)) {
            printf("%s\n", textLocal);
        }
    } else {
        puts("Este arquivo não existe!");
    }        
    
    fclose(fPointer);

    return 0;
}