#include <stdio.h>

#define sum(max, out) { \
    int total = 0;      \
    for (int i = 0; i < max; i++) \
        total += i;     \
    out = total;        \
}

int main()
{
    int out, max = 5;
    sum(max, out)
    printf("%d\n", out);
}
