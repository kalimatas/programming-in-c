#include <stdio.h>

char multi[3][4] = {
    {'0', '1', '2', '3'},
    {'A', 'B', 'C', 'D'},
    {'4', '5', '6', '7'},
};

int main()
{
    printf("%c\n", multi[0][1]); // 1
    printf("%c\n", *(*(multi + 1))); // A
    printf("%c\n", *(*(multi + 2) + 1)); // 5

    return 0;
}
