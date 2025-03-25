#include <stdio.h>

struct record 
{
    char *ptr;
    int data[3];
};

int main(void) 
{
    /*char name[6] = {'h', 'e', 'l','l','o', '\0'};

    struct record foo;

    for (int i = 0; i < 7; i++) {
        foo.ptr = &name[i];
    }

    foo.ptr = name;*/
    
    struct record *foo1;
    foo1->data[0] = 4;
    foo1->data[1] = 10;
    foo1->data[2] = 25;

    printf("%d\n", foo1->data[0]);
    printf("%d\n", foo1->data[1]);
    printf("%d\n", foo1->data[2]);
    
    return 0;
}