#include <stdio.h>

struct date InputDate();
void ShowDate(struct date d);

struct date // Structure definition
{
    int d, m, y;
};

int main()
{
    struct date dob[4]; // Structure array declare
    printf("Enter date of birth of four students\n");
    for (int i = 0; i < 4; i++)
    {
        dob[i] = InputDate();
    }
    for (int i = 0; i < 4; i++)
    {
        ShowDate(dob[i]);
    }
    return 0;
}

struct date InputDate()
{
    struct date Otherdate;
    printf("Enter the Date: ");
    scanf("%d/%d/%d", &Otherdate.d, &Otherdate.m, &Otherdate.y);
    return Otherdate;
}

void ShowDate(struct date d)
{
    printf("%d-%d-%d\n", d.d, d.m, d.y);
}