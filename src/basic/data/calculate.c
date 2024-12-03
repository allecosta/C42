#include <stdio.h>

int main() {

    int items = 75;
    float costPerItem = 10.99;
    float totalCost = items * costPerItem;
    char currency = '$';

    printf("Número de items: %d\n", items);
    printf("Custo por item: %c%.2f\n", currency, costPerItem);
    printf("Total: %c%.2f\n", currency, totalCost);

    return 0;
}