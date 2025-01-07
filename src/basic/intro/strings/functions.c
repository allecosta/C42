#include <stdio.h>
#include <string.h>

int main() {

    // Obtendo o tamanho de uma string
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet)); // 26

    /**
    * Diferença entre strlen() e sizeof()
    * O sizeof() considera o ultimo espaço de uma string que é \0
    * O sizeof() retorna sempre o tamanho da memória em bytes e não a tamanho da string 
    */
    printf("%d\n", strlen(alphabet)); // 26
    printf("%d\n", sizeof(alphabet)); // 27 

    // Concatenando strings
    char str1[11] = "Olá ";
    char str2[] = "Mundo C";
    printf("%s\n", strcat(str1, str2)); 

    // Copiando strings
    char str3[5] = "CVRG";
    char str4[5];
    printf("%s\n", strcpy(str4, str3)); // CRVG

    // Comparando strings
    char str5[] = "hello";
    char str6[] = "Hello";
    char str7[] = "Hi";
    printf("%d\n", strcmp(str5, str6)); // 32
    printf("%d\n", strcmp(str5, str7)); // 32


    return 0;
}