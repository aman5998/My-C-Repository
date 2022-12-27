// 9. Write a program to print Fibonacci series upto nth Term.

#include <stdio.h>

int main()
{
    int n, i, prepreNum = 0, preNum = 1, currNum;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d, ", prepreNum);
        currNum = prepreNum + preNum;
        prepreNum = preNum;
        preNum = currNum;
    }

    return 0;
}