#include <stdio.h>
#include <stdbool.h>

struct entry {
    char word[15];
    char definition[50];
};

int compareStrings(const char s1[], const char s2[])
{
    int i = 0;
    int answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] < s2[i])
        answer = -1;
    else if (s1[i] == s2[i])
        answer = 0;
    else
        answer = 1;

    return answer;
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool equal = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        equal = true;

    return equal;
}

int lookup(const struct entry dictionary[], const char search[],
           const int entries)
{
    int low = 0;
    int high = entries - 1;
    int mid;
    int result;

    while (low <= high) {
        mid = (low + high) / 2;

        result = compareStrings(dictionary[mid].word, search);
        if (result == -1)
            low = mid + 1;
        else if (result == 1)
            high = mid - 1;
        else 
            return mid;
    }

    return -1;
}

int main(void)
{
    const struct entry dictionary[100] = {
        {"a", "first letter"},
        {"abyss", "a bottomless pit"},
        {"knot", "for a tie"},
        {"z", "last letter"}
    };
    int entries = 4;
    char word[15];
    int entryIndex;

    printf("Enter word: ");
    scanf("%14s", word);

    entryIndex = lookup(dictionary, word, entries);

    if (entryIndex != -1)
        printf("Definition of \"%s\" is \"%s\".\n", word, dictionary[entryIndex].definition);
    else
        printf("Definition is not found.\n");

    return 0;
}