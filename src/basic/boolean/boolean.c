#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isProgrammingFun = true;
    bool notProgrammingFun = false;
    printf("%d\n", isProgrammingFun); // true
    printf("%d\n", notProgrammingFun); // false

    int x = 10, y = 25;
    bool result1 = x < y;
    bool result2 = x == y;
    printf("%d\n", result1); // true
    printf("%d\n", result2); // false

    bool isCookie = false;
    bool isPizza = true;
    bool result3 = isCookie == isPizza;
    printf("%d\n", result3); // false

    return 0;
}