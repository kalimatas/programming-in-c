#include <stdio.h>

int main()
{
    char strA[80] = "a string";
    char strB[80] = "a bigger string";

    char *pA;
    char *pB;

    puts(strA);
    pA = strA;
    puts(pA);

    pB = strB;
    putchar('\n');

    while (*pA != '\0') {
        *pB++ = *pA++;
    }
    *pB = '\0';
    puts(strB); // 

    printf("%c\n", 2[strA]);

    return 0;
}
