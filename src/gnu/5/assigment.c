#include <stdio.h>

double average(int length, double data[]) 
{
    double sum = 0;

    // Busca o elemento e adiciona ao sum
    for (int i = 0; i < length;) {
        sum += data[i++];
    }

    return sum / length;
}

int main (void)
{
    double data[] = {4, 10, 25, 12};
    double result = average(4, data);
    printf("%.1f\n",result);
    
    int i = 4;
    i = i + 10;
    i += 25;
    printf("%d\n", i);

    // Incremento
    int x = 5;
    printf("%d\n", x);
    printf("%d\n", ++x); // x++
    printf("%d\n", x);

    // Decremento
    int y = 10;
    printf("%d\n", y);
    printf("%d\n", --y); // y--
    printf("%d\n", y);

    return 0;
}