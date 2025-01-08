#include <stdio.h>

/*
* Fórmula de Fibonacci:
*
* Fn = Fn-1 + Fn-2
*
* E valores iniciais; F1= 1, F2= 1.
*/
int fib1(int y) {
    int last = 1, prev = 0;

    for (int i = 1; i < y; ++i) {
        int next = prev + last;
        prev = last;
        last = next;
    }

    return last;
}

// Uma segunda forma de fazer utilizando recursividade
int fib2(int x) {    
    if (x <= 2) {
        return 1;
    } 
        
    return fib2(x - 1) + fib2(x - 2); // 0, 1, 1, 2, 3, 5, 8 = 21
}

int main () {

    printf("%d\n", fib1(8));
    printf("%d\n", fib2(8));

    return 0;
}