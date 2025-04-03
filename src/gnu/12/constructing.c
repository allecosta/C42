#include <stdio.h>

int main(void) 
{
    char *array[] = {"a", "b", "c"};
    printf("%c\n", *array[1]);

    char *nameless[] = {"x", "y", "z"};
    char **foo = &nameless[0];
    printf("%c\n", *foo[1]);

    return 0;
}