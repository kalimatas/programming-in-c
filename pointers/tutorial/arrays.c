#include <stdio.h>

int main()
{
    int my_array[] = {1,23,17,4,-5,100}; 
    int *ptr = my_array;
    int i;

    for (i = 0; i < 6; i++) {
        printf("my_array[%d] = %4d ", i, my_array[i]);
        printf("ptr + %d = %4d\n", i, *ptr++);
    }

    return 0;
}
