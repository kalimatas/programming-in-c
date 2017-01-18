#include <stdio.h>

int main(void)
{
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->day = 18;
    datePtr->month = 1;
    datePtr->year = 2017;    

    printf("Today is %.2i.%.2i.%.2i\n", 
            datePtr->day,
            (*datePtr).month,
            datePtr->year % 100);

    return 0;
}
