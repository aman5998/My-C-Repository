// 11. Write a C program to input all sides of a triangle
// and check whether triangle is valid or not.

#include <stdio.h>

int main()
{
    int s1, s2, s3;

    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if ((s1 + s2) > s3)
    {
        if ((s2 + s3) > s1)
        {
            if ((s3 + s1) > s2)
            {
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
    return 0;
}