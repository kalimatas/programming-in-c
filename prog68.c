#include <stdio.h>

int main(void)
{
    float v1, v2;
    char operator;

    printf("Enter expression: ");
    scanf("%f %c %f", &v1, &operator, &v2);

    switch (operator) {
        case '+':
            printf("%.2f\n", v1 + v2);
            break;
        case '-':
            printf("%.2f\n", v1 - v2);
            break;
        case '*':
        case 'x':
            printf("%.2f\n", v1 * v2);
            break;
        case '/':
            if (v2 == 0)
                printf("Division by zero.\n");
            else
                printf("%.2f\n", v1 / v2);
            break;
        default:
            printf("Unknown operator %c.\n", operator);
            break;
    }

    return 0;
}
