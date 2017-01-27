#include <stdio.h>
#include "define.h"

#define SQUARE(x) ((x) * (x))
#define DEBUG(...) printf("DEBUG: " __VA_ARGS__)
#define PRINTINT(x) printf(# x " = %i\n", x)
#define PRINTX(n) printf("%i\n", x ## n)

#ifdef TST
    #define TEST_VALUE TST
#else
    #define TEST_VALUE 42
#endif

int main(void)
{
    #define NO 0

    printf("%i\n", YES);
    printf("%i\n", NO);

    int arr[MAX_VALUES] = {1};
    arr[2] = 24;

    unsigned int year = 2016;
    printf("%i: %s\n", year, IS_LEAP_YEAR(year) ? "yes" : "no");

    printf("%i: %i\n", 5, SQUARE(4 + 1));
    
    DEBUG("Hello debug!");
    DEBUG("i = %i\n", 40);

    PRINTINT(20);

    int x1 = 11, x2 = 22;
    PRINTX(1);
    PRINTX(2);

    printf("%i\n", TEST_VALUE);

    return 0;
}
