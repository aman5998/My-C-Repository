#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissors(char you, char comp);
char ComputerBrain();
void Gameresult(int result);

#include <stdio.h>

int main()
{
    char you, comp;
    int result;
    int mycount = 0, compcount = 0, drawcount = 0;
    for (int i = 1; i < 6; i++)
    {

        comp = ComputerBrain();
        printf("Enter 'r' for rock, 'p' for paper, 's'for scissors: ");
        scanf("%c", &you);
        result = rockpaperscissors(you, comp);
        Gameresult(result);
        fflush(stdin);
        if (result == 1)
            mycount++;
        else if (result == -1)
            compcount++;
        else
            drawcount++;
    }
    printf("Your total points = %d\n", mycount);
    printf("Computer total points = %d\n", compcount);
    printf("Total Draw = %d\n", drawcount);
    mycount > compcount ? printf("You are winner!!") : printf("You Lost");
    return 0;
}

char ComputerBrain()
{
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        return 'r';
    }
    else if (number > 66)
    {
        return 'p';
    }
    else
    {
        return 's';
    }
}

int rockpaperscissors(char you, char comp)
{
    if (you == comp)
        return 0;

    if (you == 'p' && comp == 'r')
        return 1;
    else if (you == 'r' && comp == 'p')
        return -1;

    if (you == 'r' && comp == 's')
        return 1;
    else if (you == 's' && comp == 'r')
        return -1;

    if (you == 's' && comp == 'p')
        return 1;
    else if (you == 'p' && comp == 's')
        return -1;
}

void Gameresult(int result)
{
    if (result == 0)
        printf("Game Draw\n");
    else if (result == 1)
    {
        printf("You Win\n");
    }
    else
    {
        printf("You lose\n");
    }
}