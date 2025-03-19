#include <stdio.h>

int after_last_nonzero(int *ptr, int length) 
{
    int *q = ptr + length;

    while (q != ptr) {
        if (*--q != 0) {
            return q - ptr + 1;
        }
    }
    return 0;
}

int main(void) 
{
    int x = 4;
    int *ptr = &x;
    int result = after_last_nonzero(ptr, 0);

    printf("%d\n", result);
}