#include <stdio.h>

long long int fibonacci()
{
    static long long int first = 0;
    static long long int second = 1;

    long long int out = first + second;
    first = second;
    second = out;

    return out;
}

int main()
{
    printf("%ld\n", __STDC_VERSION__);

    for (int i = 0; i < 22; i++)
        printf("%lld\n", fibonacci());
}
