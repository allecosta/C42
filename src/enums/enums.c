#include <stdio.h>

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

enum Values {
    NUMBER1 = 4,
    NUMBER2 = 10,
    NUMBER3 = 25
};

enum Clubs {
    LIVERPOOL = 2,
    ARSENAL,
    CHELSEA
};

int main () {

    enum Level var1 = MEDIUM;
    printf("%d\n", var1); // 1

    enum Values var2 = NUMBER1;
    printf("%d\n", var2); // 4

    enum Clubs var3 = CHELSEA;

    switch (var3) {
        case 2:
            puts("Liverpool");
            break;
        case 3:
            puts("Arsenal");
            break;
        case 4:
            puts("Chelsea"); // resultado esperado
            break;
    }

    return 0;
}