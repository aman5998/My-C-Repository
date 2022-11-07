#include <stdio.h>
struct date InputDate();
struct date
{
    int d, m, y;
};
int main()
{
    struct date d1;
    d1 = InputDate();
    printf("%d-%d-%d\n", d1.d, d1.m, d1.y);
    return 0;
}
struct date InputDate()
{
    struct date Otherdate;
    printf("Enter the Date: ");
    scanf("%d/%d/%d",&Otherdate.d,&Otherdate.m,&Otherdate.y );
    return Otherdate;
}
