#include <stdio.h>

int strlen_(const char *string)
{
    const char *cptr = string;

    while (*cptr)
        ++cptr;

    return cptr - string;
}

int main(void) {
    char s1[] = {'h', 'e', '\0'};
    char s2[] = {'h', '\0'};
    char s3[] = {'h', 'e', 'l', '\0'};
    char s4[] = {'\0'};

    printf("s1: %d\n", strlen_(s1));
    printf("s2: %d\n", strlen_(s2));
    printf("s3: %d\n", strlen_(s3));
    printf("s4: %d\n", strlen_(s4));

    int strlen_(const char *);
    int (*fPtr)(const char *);
    fPtr = strlen_;

    printf("%d\n", fPtr("Function pointer used"));

    return 0;
}
