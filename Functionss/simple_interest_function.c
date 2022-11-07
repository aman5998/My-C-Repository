#include <stdio.h>
// Function declaration
float simple_interest(float money, float interest, float time);
int main()
{
    float p, r, t, i;
    printf("Enter amount: ");
    scanf("%f", &p);
    printf("Enter interest: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    i = simple_interest(p, r, t); // Function call
    printf("Your interest is %.2f", i);
    // printf("Your interest is %d", simple_interest(79000, 5, 10));
    return 0;
}
// Function declaration
float simple_interest(float money, float interest, float time)
{
    float si = (money * interest * time) / 100;
    return si;
}