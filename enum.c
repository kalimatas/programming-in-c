#include <stdio.h>

int main(void)
{
    enum month {
        january = 1,
        february,
        march
    };

    enum month aMonth;
    int days = 0;

    printf("Enter month number: ");
    scanf("%i", &aMonth);

    switch (aMonth) {
        case january:
        case march:
            days = 31;
            break;
        case february:
            days = 28;
            break;
        default:
            printf("Unknown month\n");
            break;
    }

    if (days != 0) {
        printf("%i days \n", days);
    }

    if (aMonth == february) {
        printf("... or 29\n");
    }

    return 0;
}
