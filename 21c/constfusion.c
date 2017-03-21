#include <stdio.h>

int main()
{
    int *var;
    int const **constptr = &var;
    int const fixed = 20;
    *constptr = &fixed;
    *var = 30;

    printf("fixed=%d, var=%d\n", fixed, *var);
}
