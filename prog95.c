#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time timeUpdate(struct time);

    const short int size = 4;
    struct time times[size] = {
        {11, 59, 59},
        [1] = {12, 0, 0},
        {.hours = 1, 29, .seconds = 59},
        {23, 59, 59}
    };

    for (int i = 0; i < size; ++i) {
        printf("Time is %.2i:%.2i:%.2i", times[i].hours,
            times[i].minutes, times[i].seconds);

        times[i] = timeUpdate(times[i]);
        printf(" ... one second later it's %.2i:%.2i:%.2i\n", times[i].hours,
            times[i].minutes, times[i].seconds);
    }

    return 0;
}

struct time timeUpdate(struct time current)
{
    ++current.seconds;

    if (current.seconds == 60) {
        current.seconds = 0;
        ++current.minutes;

        if (current.minutes == 60) {
            current.minutes = 0;
            ++current.hours;

            if (current.hours == 24) {
                current.hours = 0;
            }
        }
    }

    return current;
}
