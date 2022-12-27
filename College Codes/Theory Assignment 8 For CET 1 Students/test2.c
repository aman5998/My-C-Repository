#include <stdio.h>

int main()
{
    int unit;
    float total;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if (unit <= 50)
    {
        total = unit * 4.00;
        printf("Your total bill is = %.2f", total);
    }
    else if (unit <= 150)
    {
        total = (50 * 4.00) + ((unit - 50) * 5.50);
        printf("Your total bill is = %.2f", total);
    }
    else if (unit <= 250)
    {
        total = (50 * 4.00) + (100 * 5.50) + ((unit - 150) * 6.00);
        printf("Your total bill is = %.2f", total);
    }
    else
    {
        total = (50 * 4.00) + (100 * 5.50) + (100 * 6.00) + ((unit - 250) * 6.50);
        printf("Your total bill is = %.2f", total);
    }
    return 0;
}