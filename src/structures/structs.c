#include <stdio.h>
#include <string.h>

struct myStructure {
    int number;
    char letter;
    char phrase[30];
};

int main () {

    struct myStructure s1;
    s1.number = 4;
    s1.letter = 'b';
    printf("Número: %d\n", s1.number);
    printf("Letra: %c\n", s1.letter);

    struct myStructure s2;
    s2.number = 10;
    s2.letter = 'A';
    strcpy(s2.phrase, "Good Evenning.");
    printf("Número: %d\n", s2.number);
    printf("Letra: %c\n", s2.letter);
    printf("Frase: %s\n", s2.phrase);

    struct myStructure s3 = {25, 'C', "Good Night!"};
    printf("%d\n %c\n %s\n", s3.number, s3.letter, s3.phrase);

    struct myStructure s4;
    s4 = s1;
    s4.number = 25;
    s4.letter = 'd';
    strcpy(s4.phrase, "Good Morning.");
    printf("%d\n %c\n", s1.number, s1.letter);
    printf("%d\n %c\n %s\n", s4.number, s4.letter, s4.phrase); 

    return 0;
}