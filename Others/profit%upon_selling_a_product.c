#include <stdio.h>

int main()
{
    float CostPrice, SellingPrice, Profit, ProPercentage;
    printf("Enter the Cost Price of the Product: ");
    scanf("%f",&CostPrice);
    printf("Enter the Selling Price of the Product: ");
    scanf("%f",&SellingPrice);
    Profit = SellingPrice - CostPrice;
    ProPercentage = (Profit/CostPrice)*100;
    printf("Your Profit percentage is %.2f%%", ProPercentage);
    return 0;
}