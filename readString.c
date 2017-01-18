#include <stdio.h>
#include <strings.h>

int main(void)
{
    char string[10];

    scanf("%9s", string);
    printf("size is %li\n", strlen(string));

    printf("%s\n", string);

    return 0;
}
