#include <stdio.h>

int main(void)
{
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today;

    printf("Enter today's date (dd mm yyyy): ");
    scanf("%i%i%i", &today.day, &today.month, &today.year);

    printf("Today is %.2i.%.2i.%.2i\n", today.day, today.month, today.year % 100);

    return 0;
}
