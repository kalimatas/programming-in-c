#include <stdio.h>

int main(void)
{
    printf("%li\n", __STDC_VERSION__);

    const short int size = 10;
    int values[size] = {
        [1] = 84
    };
    int index;

    values[0] = 42;
    values[2] = 88;
    values[5] = values[0] + 18;
    --values[2];

    for (index = 0; index < size; ++index)
        printf("values[%i] = %i\n", index, values[index]);

    return 0;
}
