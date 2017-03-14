#include <stdio.h>
#include <string.h>

#define MAX_BUF 256

int compareStrings(const void *a, const void *b) 
{
    return strcmp((char *)a, (char *)b);
}

void bubble(void *a, int width, int n, int (*fptr)(const void *, const void *))
{
    unsigned char buf[MAX_BUF];
    unsigned char *bp = a;

    for (int i = n - 1; i >= 0; i--)
        for (int j = 1; j <= i; j++) {
            int k = fptr((void *) (bp + width*(j-1)), (void *) (bp + width*j));
            if (k > 0) {
                memcpy(buf, bp + width*j, width);
                memcpy(bp + width*j, bp + width*(j-1), width);
                memcpy(bp + width * (j-1), buf, width);
            }
        }
}

int main(void)
{
    int i;
    char arr[5][20] = {
        "first",
        "second",
        "third",
        "hello",
        "comparison"
    };

    for (i = 0; i < 5; i++)
        printf("%s ", arr[i]);

    putchar('\n');

    bubble(arr, 20, 5, compareStrings);

    for (i = 0; i < 5; i++)
        printf("%s ", arr[i]);

    putchar('\n');

    return 0;
}
