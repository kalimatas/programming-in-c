#include <stdio.h>

void copyStringIndex(char from[], char to[])
{
    int i;

    for (i = 0; from[i] != '\0'; ++i)
        to[i] = from[i];

    to[i] = '\0';
}

void copyString(char *from, char *to)
{
    while (*from)
        *to++ = *from++;

    *to = '\0';    
}

int main(void)
{
    char from[] = "hello";
    char to[50];
    char *s;

    s = "hello";

    // copyStringIndex(from, to);
    // copyStringIndex("Hello", to);
    copyString(from, to);
    printf("%s\n", to);

    return 0;
}
