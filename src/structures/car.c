#include <stdio.h>

struct Car {
    char brand[20];
    char model[20];
    int year;
};

int main () {

    struct Car car1 = {"Ferrari", "x5", 2004};
    struct Car car2 = {"EcoSport", "Ford", 2013};
    struct Car car3 = {"Range Rover", "Evoque", 2025};

    printf("%s\t %s\t %d\n", car1.brand, car1.model, car1.year);
    printf("%s\t %s\t %d\n", car2.brand, car2.model, car2.year);
    printf("%s\t %s\t %d\n", car3.brand, car3.model, car3.year);

    return 0;
}