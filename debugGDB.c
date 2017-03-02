#include <stdio.h>
#include <stdlib.h>

struct date { 
    int month;
    int day;
    int year; 
    };

struct date foo (struct date x) {
    ++x.day;
    return x; 
}

int main (void) {
    struct date today = {10, 11, 2004}; 
    int array[5] = {1, 2, 3, 4, 5}; 
    struct date *newdate, foo();
    char *string = "test string";
    int i = 42;

    newdate = (struct date *) malloc(sizeof (struct date));
    newdate->month = 3;
    newdate->day = 2;
    newdate->year = 2017;

    today = foo(today);
    
    free(newdate);

    return 0;
}
