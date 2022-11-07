#include <stdio.h>
void natural_number(int n);
int main()
{
    int num;
    printf("Enter Number to print 1 to N numbers: ");
    scanf("%d", &num);
    natural_number(num);
    return 0;
}
void natural_number(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}