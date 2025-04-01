#include <stdio.h>

struct 
{
    int a;
    int d;

    union 
    {
        int b;
        float c;
    };
} foo ;

int main(void) 
{
    foo.a = 4;
    foo.b = 10;
    foo.c = 25.4;
    foo.d = 100;

    printf("%d\n", foo.a);
    printf("%d\n", foo.b);
    printf("%.1f\n", foo.c);
    printf("%d\n", foo.d);

    return 0;
}
