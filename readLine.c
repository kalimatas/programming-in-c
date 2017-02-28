#include <stdio.h>

int main(void)
{
    void readLine(char[]);

    char line[81];

    for (int i = 0; i < 3; ++i) {
        readLine(line);
        printf("%s\n\n", line);
    }

    return 0;
}

void readLine(char line[])
{
    char character;
    int i = 0;

    do {
        character = getchar();
        line[i] = character;
        ++i;
    } while (character != '\n');

    line[i - 1] = '\0';
}
