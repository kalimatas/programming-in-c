#include <stdio.h>

int main(void)
{
    int d, c;

    while (1) {
        printf("Enter dollars: ");
        scanf("%i", &d);
        printf("Enter cents: ");
        scanf("%i", &c);

        printf("$%i.%.2i\n\n", d, c);
    }

    return 0;
}
