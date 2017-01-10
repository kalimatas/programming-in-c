#include <stdio.h>

int main(void)
{
    void displayMatrix(int[3][4]);
    void multiplyMatrix(int[3][4], int);

    int matrix[3][4] = {
        {2, 5, 10, 12},
        {4, -2, 8, 7},
        {1, 4, 24, 19}
    };

    printf("Original matrix\n");
    displayMatrix(matrix);

    multiplyMatrix(matrix, 3);
    printf("\n");
    displayMatrix(matrix);

    return 0;
}

void displayMatrix(int matrix[3][4])
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j)
            printf("%5i", matrix[i][j]);

        printf("\n");
    }
}

void multiplyMatrix(int matrix[3][4], int scalar)
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            matrix[i][j] *= scalar;
}
