#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    //char c = '<:';
    uint8_t i = 42;

    int *ii = (int *)&i;
    *ii = 42;

    return EXIT_SUCCESS;
}
