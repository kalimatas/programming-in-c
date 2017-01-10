#include <stdio.h>

int main(void)
{
    //printf("Programming is fun.\n");
    //printf("And programming in C is even more fun.\n");

    int v1, v2, sum;

    v1 = 42;
    v2 = 50;
    sum = v1 + v2;
    printf("The sum of %i and %i is %i\n", v1, v2, sum);
    printf("The same in octal: %#o and %#o is %#o\n", v1, v2, sum);

    long double f;

    f = 331.39L;
    printf("%Lg\n", f);

    char c;

    c = '\n';
    printf("%i\n", c);

    _Bool boolVar = 0;
    printf("%i\n", boolVar);

    printf("%li\n", 100L);

    short int si = 100;
    printf("%hi\n", si);

    printf("%i/%i = %i\n", 100, 80, 100 / 80);

    // 4.1
    printf("Ex. 4.4\n");

    int fahr = 27;
    float cel;

    cel = (fahr - 32) / 1.8;
    printf("%iF is %gC\n", fahr, cel);

    // 4.7
    printf("%g\n", 3.31 * 1e-8 * 2.01 * 1e-7);

    return 0;
}
