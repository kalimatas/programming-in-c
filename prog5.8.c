#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter number: ");
    scanf("%i", &n);

    do {
        printf("%i", n % 10);
        n /= 10;
    } while (n != 0);

    printf("\n");

    return 0;
}
