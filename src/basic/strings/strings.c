#include <stdio.h>

int main() {

    char greetings[] = "Olá Mundo C";
    printf("%s\n", greetings); 

    printf("%c\n", greetings[11]); 

    greetings[1] = 'b'; 
    printf("%c\n", greetings[1]);

    char car[] = "Ferrari";

    // Iterando todo o array com o valor explicito i < 7
    for (int i = 0; i < 7; ++i) { 
        printf("%c\n", car[i]); 
    }

    char car2[] = "Maclaren";
    // Iterando todo o array obtendo o tamanho do array
    int length = sizeof(car2) / sizeof(car2[0]);

    for (int j = 0; j < length; ++j) {
        printf("%c\n", car2[j]);
    }

    char message[] = "Muito bom ver você,";
    char name[] = "Rosa Maria";
    printf("%s %s!", message, name); 

    return 0;
}