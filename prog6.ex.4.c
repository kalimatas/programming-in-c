#include <stdio.h>

int main(void)
{
    float accumulator, number;
    char operator;

    printf("Begin Calculations\n");

    do {
        scanf("%f %c", &number, &operator);

        switch (operator) {
            case 'S':
                accumulator = number;
                break;
            case '+':
                accumulator += number;
                break;
            case '-':
                accumulator -= number;
                break;
            case '*':
            case 'x':
                accumulator *= number;
                break;
            case '/':
                if (number == 0)
                    printf("Error: division by zero.\n");
                else
                    accumulator /= number;
                break;
            default:
                printf("Unknown operator %c.\n", operator);
                break;
        }

        printf("= %f\n", accumulator);
    } while (operator != 'E');

    printf("End of Calculations\n");

    return 0;
}
