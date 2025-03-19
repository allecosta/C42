#include <stdio.h>

int sum_array_till(int *ptr) 
{
    int sum = 0;

    for (;;) {
        int next = *ptr++;

        if (next == 0) {
            break;
        }
        sum += next;
    }
    return sum;
}

int sum_array_till_indexing(int *ptr) 
{
    int sum = 0;

    for (int i = 0; ; i++) {
        int next = ptr[i];

        if (next == 0) {
            break;
        }
        sum += next;
    }
    return sum;
}

int main(void) 
{
    int x = 5;
    int *ptr1 = &x;
    int result1 = sum_array_till(ptr1);

    printf("%d\n", result1);

    int y = 10;
    int *ptr2 = &y;
    int result2 = sum_array_till_indexing(ptr2);

    printf("%d\n", result2);
}