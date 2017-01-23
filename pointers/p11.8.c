#include <stdio.h>

void test(int *intPtr)
{
    *intPtr = 100;
}

int main(void)
{
    void test(int*);
    int i = 50;

    test(&i);

    printf("%i\n", i);

    return 0;
}
