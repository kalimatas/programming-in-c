#include <stdio.h>
#include <stdlib.h>

void one()
{
    #define COLS 5

    typedef int RowArray[COLS];

    RowArray *rptr;
    int (*anotherRptr)[COLS];

    int nrows = 10;
    int row, col;

    rptr = malloc(nrows * COLS * sizeof(int));
    anotherRptr = malloc(nrows * COLS * sizeof(int));

    for (row = 0; row < nrows; row++) {
        for (col = 0; col < COLS; col++) {
            rptr[row][col] = 17;
            anotherRptr[row][col] = 17;
        }
    }
}

void two()
{
    int nrows = 5;
    int ncols = 10;
    int row;

    int **rowptr;
    rowptr = malloc(nrows * sizeof(int *));

    if (rowptr == NULL) {
        fprintf(stderr, "Cannot allocate room for row pointers.\n");
        exit(1);
    }

    for (row = 0; row < nrows; row++) {
        rowptr[row] = malloc(ncols * sizeof(int));
        if (rowptr[row] == NULL) {
            fprintf(stderr, "Cannot allocate room for row[%d].\n", row);
            exit(1);
        }
    }
}

void three()
{
    int **rptr;
    int *aptr, *testptr;
    int nrows = 5, ncols = 10;
    int row, col, k;

    // allocate memory sequentially for the whole array
    aptr = malloc(nrows * ncols * sizeof(int));

    // allocate memory for the pointers to the nrows
    rptr = malloc(nrows * sizeof(int *));

    // 'point' the pointers
    for (k = 0; k < nrows; k++) {
        rptr[k] = aptr + (k * ncols);
    }

    for (row = 0; row < nrows; row++) {
        for (col = 0; col < ncols; col++) {
            rptr[row][col] = row + col;
            printf("%d ", rptr[row][col]);
        }
        putchar('\n');
    }

    puts("\n");

    testptr = aptr;
    for (row = 0; row < nrows; row++) {
        for (col = 0; col < ncols; col++) {
            printf("%d ", *(testptr++));
        }
        putchar('\n');
    }

}

int main(void)
{
    one();
    two();
    three();

    return 0;
}
