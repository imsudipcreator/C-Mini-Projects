#include <stdio.h>
#include <stdlib.h>

void pointerToPointer();

int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf(" x = %d\n", x); // 0
    printf(" *ptr = %d\n", *ptr); // 0

    *ptr += 5;
    printf(" x = %d\n", x); // 5
    printf(" *ptr = %d\n", *ptr); // 5

    (*ptr)++;
    printf(" x = %d\n", x); // 6
    printf(" *ptr = %d\n", *ptr); // 6
    pointerToPointer();
    // system("python -c \"print('Hello, world!')\"");
    // system("node -e \"console.log('Hello, World!')\"");

    return 0;
}

void pointerToPointer()
{
    int i = 7;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
}