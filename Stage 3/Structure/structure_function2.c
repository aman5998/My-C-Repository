#include <stdio.h>
struct date InputDate();
void ShowDate(struct date d);
struct date
{
    int d, m, y;
};
int main()
{
    struct date d1;
    d1 = InputDate();
    ShowDate(d1); // Call by passing structure
    return 0;
}
void ShowDate(struct date d) // Takes something returns nothing
{
    printf("%d-%d-%d\n", d.d, d.m, d.y);
}
struct date InputDate() // Takes nothing returns something 
{
    struct date Otherdate;
    printf("Enter the Date: ");
    scanf("%d/%d/%d",&Otherdate.d,&Otherdate.m,&Otherdate.y );
    return Otherdate;
}
