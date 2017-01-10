#include <stdio.h>

int main(void)
{
    int i, number, tn;

    for (int counter = 0; counter <= 4; ++counter) {
        printf("What number you want? ");
        scanf("%i", &number);

        tn = 0;

        for (i = 1; i <= number; ++i)
            tn += i;

        printf("%i %i\n", number, tn);
    }

    return 0;
}
