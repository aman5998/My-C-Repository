#include <stdio.h>

int main()
{
    int x;
    printf("Enter the number of day: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("wed");
        break;
    case 4:
        printf("thu");
        break;
    case 5:
        printf("fri");
        break;
    case 6:
        printf("sat");
        break;
    case 7:
        printf("sun");
        break;
    default:
        printf("\n Please enter Valid Number between 1 to 7");
        break;
    }
    return 0;
}