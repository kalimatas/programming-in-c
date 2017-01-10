#include <stdio.h>

int main(void)
{
    unsigned long int factorial(unsigned int);
    unsigned int j;

    for (j = 0; j < 11; ++j)
        printf("%2u! = %lu\n", j, factorial(j));

    return 0;
}

unsigned long int factorial(unsigned int j)
{
    unsigned long int f;

    if (j == 0)
        return 1;
    else
        return j * factorial(j - 1);

    return f;
}
