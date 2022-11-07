#include <stdio.h>

int main()
{
    int a, b, hcf;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    for (hcf = a < b ? a : b; hcf >= 1; hcf--)
        if (a % hcf == 0 && b % hcf == 0)
            break;
    printf("HCF is %d",hcf);
    return 0;
}