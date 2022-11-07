// A = P (1 + rt)
// A	=	final amount
// P	=	initial principal balance
// r	=	annual interest rate
// t	=	time (in years)

#include<stdio.h>

int main(){
    int p, t;
    float r;
    printf("Enter the principle balance: ");
    scanf("%d",&p);
    printf("Enter the annual interest rate: ");
    scanf("%f",&r);
    printf("Enter the time (in years): ");
    scanf("%d",&t);
    float A =(p*r*t)/100;
    printf("The simple interest is = %.2f",A);

    return 0;
}