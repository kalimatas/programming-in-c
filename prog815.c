#include <stdio.h>

void auto_static()
{
    int autoVar = 1;
    static int staticVar = 1;

    printf("auto = %i, static = %i\n", autoVar, staticVar);

    ++autoVar;
    ++staticVar;
}

int main(void)
{
    for (int i = 0; i < 4; ++i)
        auto_static();

    return 0;
}
