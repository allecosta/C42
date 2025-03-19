#include <stdio.h>

int main(void) 
{
    int a[4];
    char *ptr = (char *) a;
    int *result = (int *) ptr + 1;
    
    printf("%lu\n", result);
}