#include <stdio.h>

int main(void)
{
    int M[4][3] = {
        {1, 2},
        {3, 4, 5}
    };

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%i ", M[i][j]);

        printf("\n");
    }

    return 0;
}
