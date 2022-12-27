// 3. Write a program in C to print all prime numbers from 1 to n, n will be taken as user input.

#include <stdio.h>

int main()
{
    int num, i, j, count;

    printf("Enter the range: ");
    scanf("%d", &num);

    printf("The prime numbers in between the range 1 to %d:\n", num);

    for (i = 1; i <= num; i++)
    {
        count = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && i != 1)
            printf("%d ", i);
    }
    
    return 0;
}
