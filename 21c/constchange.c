#include <stdio.h>

void set(int *a, int const *b)
{
    a[0] = 10;
}

int main()
{
    int a[10] = {};
    int const *b = a;
    set(a, b);
}
