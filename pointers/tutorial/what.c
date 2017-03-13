#include <stdio.h>

int main()
{
    int k = 6;
    int *ptr = &k;
    char c = 'c';
    char *cptr = &c;

    printf("int: %ld\n", sizeof(k));
    printf("int*: %ld\n", sizeof(ptr));

    printf("char: %ld\n", sizeof(c));
    printf("char*: %ld\n", sizeof(cptr));

    printf("k has the value %d and is stored at %p\n", k, &k);

    *ptr = 7;

    printf("int*: %d\n", *ptr);

    return 0;
}
