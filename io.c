#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *inputFile;

    inputFile = fopen("readLine.c", "r");
    if (inputFile == NULL) {
        printf("Cannot open the file\n");

        return EXIT_FAILURE;
    }

    char c;
    while ((c = getc(inputFile)) != EOF)
        printf("%c", c);

    fclose(inputFile);

    return EXIT_SUCCESS;
}
