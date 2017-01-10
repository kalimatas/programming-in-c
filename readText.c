#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    void readLine(char[]);
    int countWords(const char[]);

    char text[81];
    bool eof = false;
    int totalWords = 0;

    printf("Enter text. Press 'RETURN', when you're done.\n\n");

    while (!eof) {
        readLine(text);

        if (text[0] == '\0')
            eof = true;
        else
            totalWords += countWords(text);
    }
    
    printf("\nThere are %i words in the above text.\n", totalWords);

    return 0;
}

int countWords(const char string[])
{
    bool isAlpha(const char);
    int words = 0;
    bool lookingForWord = true;

    for (int i = 0; string[i] != '\0'; ++i) {
        if (isAlpha(string[i])) {
            if (lookingForWord){
                ++words;
                lookingForWord = false;
            }
        } else {
            lookingForWord = true;
        }
    }

    return words;
}

bool isAlpha(const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
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