// 8. Write a program to print the following pattern:

//   A
//   A B
//   A B C
//   A B C D
//   A B C D E

#include <stdio.h>

int main()
{
    int i, j, chr;
    for (i = 1; i <= 5; i++)
    {
        chr = 'A';
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
                printf("%c ", chr++);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
