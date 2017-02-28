#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *in, *out;
    
    // printf("File to copy: ");
    // scanf("%63s", from);
    // printf("Destination: ");
    // scanf("%63s", to);

    if (argc != 3) {
        fprintf(stderr, "Need two file names.\n");
        return EXIT_FAILURE;
    }

    if ((in = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Cannot open file %s.\n", argv[1]);
        return 1;
    }

    if ((out = fopen(argv[2], "w")) == NULL) {
        fprintf(stderr, "Cannot create destination file %s.\n", argv[2]);
        return 1;
    }

    char c;
    while ((c = getc(in)) != EOF)
        putc(c, out);

    fclose(in);
    fclose(out);

    return 0;
}
