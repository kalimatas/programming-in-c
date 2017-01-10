#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int countWords(const char[]);
    const char text1[] = "Hello world";
    const char text2[] = "Hello world... again";

    printf("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));

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