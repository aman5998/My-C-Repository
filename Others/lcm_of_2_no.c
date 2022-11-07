#include <stdio.h>

int main()
{
    int a, b, lcm;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    for (lcm = a > b ? a : b; lcm <= a * b; lcm++)
        if (lcm % a == 0 && lcm % b == 0)
            break;
    printf("The LCM is %d", lcm);
    return 0;
}