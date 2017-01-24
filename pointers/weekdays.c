#include <stdio.h>

void printWeekdays(char **w, const int size)
{
    for (; w < w + size; ++w)
        printf("%s\n", *w);
}

int main(void)
{
    char *weekdays[7] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    printWeekdays(weekdays, 7);

    // char s[] = "fewfe";
    // char *sPtr = s;
    // char *wPtr = *weekdays;

    // printf("%s\n", sPtr);
    // printf("%s\n", wPtr);

    // for (short int i = 0; i < 7; ++i)
    // for (; wPtr < *weekdays + 7; ++wPtr)
        // printf("%s\n", wPtr);

    return 0;
}
