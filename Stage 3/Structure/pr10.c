#include <stdio.h>

typedef struct TimeZone
{
    int date, month, year;
    int hour, minute, sec;
} TimeZone;

void display(TimeZone tz);
int TimeCmp(TimeZone d1, TimeZone d2);

int main()
{
    TimeZone tz1 = {25, 5, 2003, 22, 5, 55};
    TimeZone tz2 = {14, 11, 2009, 12, 17, 55};

    display(tz1);
    display(tz2);

    int a = TimeCmp(tz1,tz2);
    printf("Date Comparision function returns: %d", a);

    return 0;
}

void display(TimeZone tz)
{
    printf("The TimeZone is: %d/%d/%d,%d:%d:%d\n", tz.date, tz.month, tz.year, tz.hour, tz.minute, tz.sec);
}

int TimeCmp(TimeZone d1, TimeZone d2)
{
    if (d1.year > d2.year)
        return 1;
    if (d1.year < d2.year)
        return -1;

    if (d1.month > d2.month)
        return 1;
    if (d1.month < d2.month)
        return -1;

    if (d1.date > d2.date)
        return 1;
    if (d1.date < d2.date)
        return -1;

    if (d1.hour > d2.hour)
        return 1;
    if (d1.hour < d2.hour)
        return -1;

    if (d1.minute > d2.minute)
        return 1;
    if (d1.minute < d2.minute)
        return -1;

    if (d1.sec > d2.sec)
        return 1;
    if (d1.sec < d2.sec)
        return -1;
}