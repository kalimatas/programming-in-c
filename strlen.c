#include <stdio.h>

int strlen_(const char s[])
{
    int result = 0;

    while (s[result] != '\0')
        ++result;

    return result;
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

    return 0;
}
