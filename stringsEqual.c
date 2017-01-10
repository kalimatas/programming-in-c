#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool equalStrings(const char[], const char[]);

    const char s1[] = "test string";
    const char s2[] = "test";

    printf("%i\n", equalStrings(s1, s2));
    printf("%i\n", equalStrings(s1, "test string"));

    return 0;
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool equal = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        equal = true;

    return equal;
}
