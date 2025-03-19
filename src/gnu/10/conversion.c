#include <stdio.h>
#include <stdint.h> // Header necessario para poder utilizar o tipo uintptr_t

int main(void *ptr) 
{
    // Convertendo um ponteiro para um inteiro
    uintptr_t converted = (uintptr_t) ptr;

    printf("Valor do ponteiro é 0x%x\n", (unsigned int) converted);
}