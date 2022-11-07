/* Define a game like program,in which user has to enter
an even number to win the game.User will get at most 3 chances */

#include <stdio.h>

int main()
{
    int n, i;
    for (i = 1; i <= 3; i++)
    {
        printf("Enter a even number: ");
        scanf("%d", &n);
        if (n % 2 == 0)
            break;
    }
    if (i == 4)
        printf("Game Over");
    else
        printf("You won the game");
    return 0;
}