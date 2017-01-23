#include <stdio.h>

unsigned int arraySum(int *array, const int size)
{
    int sum = 0;
    int * const arrayEnd = array + size;

    for (; array < arrayEnd; ++array)
        sum += *array;

    return sum;
}

int main(void)
{
    unsigned int arraySum(int *, const int n);
    int array[4] = {1, 2, 3, 4};

    printf("Sum is %i\n", arraySum(array, 4));

    return 0;    
}
