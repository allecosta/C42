#include <stdio.h>

int main(void) 
{
    /**
     * Ponteiros são variáveis que armazenam o endereço de um dado em memória.
     */

     // A variavel 'x' é um tipo int e, '&x' é um ponteiro para int
     // A variavel 'a' é um tipo double e, '&a' é um ponteiro de array para 4 doubles
     int x;
     double a[4];
     printf("%d\n", &x);
     printf("%f\n", &a);

     // Declarando variaveis ponteiros
     int *ptr1;
     double *ptr2;
     double *ptr3[10];
     printf("%d\n",  &ptr1);
     printf("%f\n", &ptr2);
     printf("%f\n", &ptr3);

     // Dereferenciando ponteiros
     int y;
     int *ptr4;
     ptr4 = &y;
     y = 25;
     printf("%d\n", *ptr4);

     // Ponteiros NULL
     char *foo = NULL;
     printf("%d\n", foo); // 0

     foo = (char *) NULL;
     printf("%d\n", foo);

     if (foo) {
        puts("foo não é null");
     }

     /*
     // Ponteiros invalidos
     char *bar = NULL;
     char c = *bar;
     printf("%d\n", c); // Segmentation fault

     // Para que não ocorra o erro acima
     volatile char *bar2;
     volatile char z = *bar2;
     printf("%d\n", z);*/

     // Comparação de ponteiros
     int b;
     int *ptr5, *ptr6;
     ptr5 = &b;
     ptr6 = &b;

     if (ptr5 == ptr6) {
        puts("\nEstes ponteiros estão apontado para o mesmo endereço de memória");
     } else {
        puts("\nEstes ponteiros estão NÃO apontado para o mesmo endereço de memória");
     }
     
    return 0;
}

