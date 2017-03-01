#include <stdio.h>
#include <stdlib.h>

#define ELEMENTS(x) (sizeof(x) / sizeof(x[0]))

static void printArray(unsigned int * const intPtr)
{
    for (unsigned int *p = intPtr; p < intPtr + 5; ++p)
        printf("%u ", *p);
}

int main(int argc, char *argv[])
{
    unsigned int ints[5];
    unsigned int *intPtr;
    // unsigned int *intPtrM;

    printf("%ld\n", sizeof(unsigned long));
    printf("%ld\n", sizeof(ints));
    printf("%ld\n", ELEMENTS(ints));

    intPtr = (unsigned int *) calloc(6, sizeof(int));
    // intPtrM = (unsigned int *) malloc(6 * sizeof(int));

    if (intPtr == NULL) {
        fprintf(stderr, "calloc failed\n");
        return EXIT_FAILURE;
    }

    for (unsigned int *p = intPtr; p < intPtr + 5; ++p)
        *p = 2;

    printArray(intPtr);

    free(intPtr);
}
