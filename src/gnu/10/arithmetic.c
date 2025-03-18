#include <stdio.h>

void incrementPointers() 
{
    int array[5] = {4, 10, 25, -3, 410253};
    int elt0, elt1, elt4;
    int *ptr = &array[0];

    elt0 = *ptr;
    ++ptr;
    elt1 = *ptr;
    ptr += 3;
    elt4 = *ptr;
    
    printf("elt0 %d elt1 %d elt4 %d\n", elt0, elt1, elt4);
}

void decrementPointers() 
{
    int array[5] = {4, 10, 25, -3, 410253};
    int elt0, elt3, elt4;
    int *ptr = &array[4];
     
    elt4 = *ptr;
    --ptr;
    elt3 = *ptr;
    ptr -= 3;
    elt0 = *ptr;
    
    printf("elt0 %d elt3 %d elt4 %d\n", elt0, elt3, elt4);
}

void subtractPointers() 
{
    int array[5] = {4, 10, 25, -3, 410253};
    int *ptr0, *ptr3, *ptr4;
    int *ptr = &array[4];

    ptr4 = ptr;
    --ptr;
    ptr3 = ptr;
    ptr -= 3;
    ptr0 = ptr;

    printf("%d %d %d %d\n", ptr4 - ptr0, ptr0 - ptr0, ptr3 - ptr0, ptr0 - ptr3);
}

int main(void)
{
    incrementPointers();
    decrementPointers();
    subtractPointers();
}