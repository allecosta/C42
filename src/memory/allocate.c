#include <stdio.h>
#include <stdlib.h>

/*
* O processo de reserva de memória é chamado de allocation;
* O caminho para alocação de memória depende do tipo de memória;
*
* São dois tipos de memória:
*
* Memória estática e memória e memória dinâmica;
*
* Memória estática (static memory) é reservada para variáveis antes que o programa seja executado (compile time);
* Memória dinâmica (dynamic memory) é a memória que é reservada depois que o programa é executado (runtime); 
*
* Pilha de memória (stack memory) é um tipo de memória dinâmica.
*/
int main () {

    // Memória estática
    int studentsClass[25];
    printf("%lu\n", sizeof(studentsClass)); // 100. Porque 25 x 4 = 100

    // Memória dinâmica - somente pode ser acessada com ponteiros
    int *pointer1, *pointer2;
    pointer1 = malloc(sizeof(*pointer1));
    pointer2 = calloc(1, sizeof(*pointer2));

    int *students;
    int numStudents = 15;
    students = calloc(numStudents, sizeof(*students));
    printf("%d\n", numStudents * sizeof(*students)); // 60. Porque 15 x 4 = 60

    return 0;

}