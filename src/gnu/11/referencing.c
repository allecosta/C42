#include <stdio.h>

struct referencing 
{
    int date;
    struct referecing *next; // Ponteiro para outra struct referencing
};

int main(void) 
{
    struct referencing foo;
    foo.date = 20250325;
    foo.next;

    struct referencing *ptr;
    ptr->date;
    ptr->next;

    printf("Data: %d\n", foo); // 20250325
    printf("Data: %d\n", ptr); // 0

    return 0;
}

