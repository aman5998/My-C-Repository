#include <stdio.h>

struct date
{
    int d, m, y;
};
struct date InputDate();
void ShowDate(struct date d);
void sort(struct date d[], int n);
int main()
{
    struct date dob[5];
    printf("Enter Date of Birth of 5 Members\n");
    for (int i = 0; i < 5; i++)
    {
        dob[i] = InputDate();
    }
    sort(dob, 5);
    for (int i = 0; i < 5; i++)
    {
        ShowDate(dob[i]);
    }
    return 0;
}
void sort(struct date d[], int n)
{
    struct date temp;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (d[i].y > d[j].y)
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
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