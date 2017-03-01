#include <stdio.h>
#include <stdlib.h>

#ifdef DEBUG
    #define debugMessage(fmt, ...) fprintf(stderr, fmt, __VA_ARGS__)
#else
    #define debugMessage(fmt, ...)
#endif

int main(void)
{
    int i, j, k, nread;

    nread = scanf("%d %d %d", &i, &j, &k);

    debugMessage("Number of integers read = %d\n", nread);
    debugMessage("%d, %d, %d\n", i, j, k);

    printf("%d\n", i + k + j);

    return EXIT_SUCCESS;
}
