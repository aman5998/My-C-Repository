#include <stdio.h>

int main()
{
    int age, amount, time;
    float si;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter amount for investing: ");
    scanf("%d", &amount);
    if (age >= 18 && age <= 55 && amount >= 10000 && amount <= 100000)
    {
        if (age <= 25)
            time = 30;
        else if (age > 40)
            time = 10;
        else
            time = 20;
        si = amount * 5 * time / 100.0;
        printf("\nYour maturity amount will be %.2f", amount + si);
    }
    else
    {
        printf("You are not eligible for the scheme");
    }
    return 0;
}