#include<stdio.h>
void main()
{
int a,b;
printf(" Enter a Three Digit Number:");
scanf("%d" ,&a);
b = (a / 10) % 10 ;
printf("Middle digit=%d\n" ,b);
}