#include <stdio.h>

int main(void)
{
    int arr1[5] = {42, 88, 2, 134, 9};
    int arr2[7] = {42, 88, 1, 134, 9, 9823, 3};
    int minimum(int[], int);

    printf("Minimum is %i\n", minimum(arr1, 5));
    printf("Minimum is %i\n", minimum(arr2, 7));

    return 0;
}

int minimum(int numbers[], int n)
{
    int min;

    min = numbers[0];
    for (int i = 1; i < n; ++i)
        if (numbers[i] < min)
            min = numbers[i];

    return min;
}
