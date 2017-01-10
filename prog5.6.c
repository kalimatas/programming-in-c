#include <stdio.h>

int main(void)
{
    int u, v, temp;

    printf("Enter two nonnegative integers.\n");
    scanf("%i%i", &u, &v);

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("GCD is %i\n", u);

    return 0;
}
