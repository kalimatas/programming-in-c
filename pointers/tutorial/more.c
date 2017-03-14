#include <stdio.h>

char multi[3][4] = {
    {'0', '1', '2', '3'},
    {'A', 'B', 'C', 'D'},
    {'4', '5', '6', '7'},
};

typedef short int Array[10];

int main()
{
    printf("%c\n", multi[0][1]); // 1
    printf("%c\n", *(*(multi + 1))); // A
    printf("%c\n\n", *(*(multi + 2) + 1)); // 5

    Array arr2d[5];
    Array *p1d;

    p1d = &arr2d[0];
    // p1d = arr2d; // or

    // or without Array typedef
    // pp1d is a pointer to an array of 10 integers
    short int (*pp1d)[10] = arr2d;

    printf("%ld\n", sizeof(p1d));
    printf("%ld\n", sizeof(*p1d));

    return 0;
}
