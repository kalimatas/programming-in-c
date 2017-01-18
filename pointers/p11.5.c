#include <stdio.h>

int main(void)
{
    struct t {
        int *p1;
        int *p2;
    };

    int i1 = 12, i2;
    struct t pointers = {
        .p1 = &i1,
        .p2 = &i2
    };

    *pointers.p2 = -10;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    return 0;
}
