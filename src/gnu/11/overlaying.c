#include <stdio.h>

struct a 
{
    int size;
    char *data;
};

struct b 
{
    int size;
    char *data;
};

struct a foo;

struct a *ptr1 = &foo;
struct b *ptr2 = (struct b *) &foo;

int main(void) 
{
    ptr1->size = 4;
    ptr2->size = 10;
    int x = ptr1->size;

    printf("%d\n", x); // 10. Porque é o último valor atribuido a variável size
    
    return 0;
}