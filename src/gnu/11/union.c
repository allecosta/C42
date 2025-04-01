#include <stdio.h>

union bytes8
{
    long long bigIntElt;
    double doubleElt;

    struct 
    { 
        int first, second; 
    } twoInts;

    struct 
    { 
        void *first, *second; 
    } twoPtrs;
};

union bytes8 *ptr;

// Basicacamente esta union obtem-se o mesmo resultado da union acima
union eightBytes
{
    long long bigIntElt;
    double doubleElt;
    int twoInts[2];
    void *twoPtrs[2];
};

int main(void) 
{
    printf("%d\n", sizeof(ptr->bigIntElt)); //8
    printf("%d\n", sizeof(ptr->doubleElt)); // 8
    printf("%d\n", sizeof(ptr->twoInts.first)); // 4
    printf("%d\n", sizeof(ptr->twoInts.second)); // 4
    printf("%d\n", sizeof(ptr->twoPtrs.first)); // 8
    printf("%d\n", sizeof(ptr->twoPtrs.second)); // 8
    
    return 0;
}

