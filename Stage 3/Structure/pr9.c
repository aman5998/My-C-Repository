#include <stdio.h>

typedef struct date
{
    int date, month, year;
} date;

void display(date d);
int dateCmp(date d1, date d2);

int main()
{
    date d1 = {25, 5, 2003};
    date d2 = {31, 11, 2082};

    display(d1);
    display(d2);

    int a = dateCmp(d1, d2);
    printf("Date Comparision function returns: %d", a);

    return 0;
}

void display(date d)
{
    printf("The date is: %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCmp(date d1, date d2)
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
}