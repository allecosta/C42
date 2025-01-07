#include <stdio.h>

int sum(int x);

int main () {

    printf("%d\n", sum(10));
    return 0;
}

int sum(int x) {
    if (x > 0) {
        int result = x + sum(x - 1);
        return result;
    } else {
        return 0;
    }
}