// fibonacci Series--> 0 1 1 2 3 5 8 13 21 34 55 ...N

#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, c;
    printf("Enter number of term: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
/*#include <stdio.h>

int main()
{
    int n, i, preNum = 1, currNum = 1, prepreNum;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", preNum);
        prepreNum = preNum;
        preNum = currNum;
        currNum = preNum + prepreNum;
    }
    return 0;
}*/