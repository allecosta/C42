#include <stdio.h>

double average1(double a, double b, double c) {
    double result = (a + b + c) / 3;
    return result;
}

double average2(int length, double data[]) {
    double sum = 0;

    for (int i; i < length; i++) {
        sum += data[i];
    }

    return sum / length;   
}

int main(void) {

    printf("Media %.1f\n", average1(3.5, 7.9, 9));

    double numsAverage[] = {8.7, 5.11, 7.7, 5.2};
    double average = average2(4, numsAverage);
    printf("Media %.1f\n", average);

    return 0;
}