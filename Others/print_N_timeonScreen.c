// Write a program to print MySirG N times on the screen.

#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("How many times you want to print on screen: ");
    scanf("%d", &n);
    while (i <= n)
        
    {
        printf("I am Coder%d\n",i);
        i++;
    }
    return 0;
}