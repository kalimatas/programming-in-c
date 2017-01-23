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
    for (; *from != '\0'; ++from, ++to)
        *to = *from;

    *to = '\0';    
}

void printStringByChar(char *from)
{
    for (; *from != '\0'; ++from)
        printf("%c", *from);

    printf("\n");
}

int main(void)
{
    char from[] = "hello";
    char to[50];

    printStringByChar(from);

    copyStringIndex(from, to);
    copyStringIndex("Hello", to);
    copyString(from, to);
    printf("%s\n", to);

    return 0;
}
