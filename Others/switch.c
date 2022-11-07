#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    switch (x)
    {
    case 12:
        printf("A");
        break;
    case 54:
        printf("B");
        break;
    case 28:
        printf("C");
        break;
    case 98:
        printf("D");
        break;
    case 61:
        printf("E");
        break;
    default:
    printf("This is default");
        break;
    }
    return 0;
}