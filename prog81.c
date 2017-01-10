#include <stdio.h>

void calculateTriangle(int n)
{
    auto int tn = 0;

    for (int i = 1; i <= n; ++i)
        tn += i;

    printf("Triangular number %i is %i\n", n, tn);
}

int main(void)
{
    calculateTriangle(10);
    calculateTriangle(30);

    return 0;
}
