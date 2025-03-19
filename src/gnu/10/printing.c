#include <stdio.h>

void print_pointer(void *ptr) 
{
    printf("O valor do ponteiro é %p\n", ptr);
}

int main(void) 
{
    int x = 25;
    int *ptr = &x;
    
    print_pointer(ptr);
}