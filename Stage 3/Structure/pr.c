#include <stdio.h>

struct date
{
    int d, m, y;
};

void ShowDate(struct date d);
struct date InputDate();
void sort(struct date list[], int s);

int main()
{
    struct date dob[3];
    for (int i = 0; i < 3; i++)
    {
        dob[i] = InputDate();
    }
    sort(dob,3);
    for (int i = 0; i < 3; i++)
    {
        ShowDate(dob[i]);
    }
    return 0;
}
void sort(struct date list[], int s)
{
    int i, j;
    struct date temp;

    for (i = 0; i < s; i++)
    {
        for (j = i + 1; j < s; j++)
        {
            if (list[i].y > list[j].y)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
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