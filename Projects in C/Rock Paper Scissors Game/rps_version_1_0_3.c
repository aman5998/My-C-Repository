#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissors(char you, char comp);
char ComputerBrain();
void Gameresult(int result);

#include <stdio.h>

int main()
{
    char x; // For do while loop
    char you, comp;
    int result, askround, round; //
    int mycount = 0, compcount = 0, drawcount = 0;
    do
    {
        system("cls");       // For clear the console
        system("Color  70"); // Responsible for colorful console

        printf("Developer : @AmanKr_Shaw\n\n");
        printf("Press any key to start...\n");
        getch();

        system("cls");       // For clear the console
        system("Color  70"); // Responsible for colorful console

        printf("\t\t<--Rock-Paper-Scissor-->\n");

        printf("\nGame Rules:-");
        printf("\nEnter 'r' for rock\nEnter 'p' for paper\nEnter 's' for scissors\n\n");

        printf("\nPRESS SPACE TO CONTINUE!!\n");
        getch();

        system("cls");       // For clear the console
        system("Color  70"); // Responsible for colorful console

        printf("\t\t<--Rock-Paper-Scissor-->\n");

        printf("\nHow Much Rounds You Want To Play??\n");
        printf("1. 3 Rounds\n2. 5 Rounds\n3. Custom\n");

        printf("\nChoose Your Option: ");
        scanf("%d", &askround);

        if (askround == 1)
        {
            round = 3;
        }
        else if (askround == 2)
        {
            round = 5;
        }
        else if (askround == 3)
        {
            printf("\nEnter Your Custom Round: ");
            scanf("%d", &round);
        }

        fflush(stdin);

        system("cls");
        system("Color  70");

        for (int i = 1; i <= round; i++)
        {
            printf("\n\t\t<--Rock-Paper-Scissor-->\n");

            comp = ComputerBrain();

            printf("Round %d\n", i);
            printf("Choose your option: ");
            scanf("%c", &you);

            result = rockpaperscissors(you, comp);
            Gameresult(result);

            fflush(stdin);

            if (result == 1)
            {
                mycount++;
            }
            else if (result == -1)
            {
                compcount++;
            }
            else
            {
                drawcount++;
            }
            printf("You choose %c and computer choose %c. \n", you, comp);

            printf("\nPRESS SPACE TO CONTINUE!!\n");
            getch();
        }

        system("cls"); // For clear the console
        system("Color  70");

        printf("\n\t\t<--Rock-Paper-Scissor-->\n");
        
        printf("\nYour total points = %d\n", mycount);
        printf("Computer total points = %d\n", compcount);
        printf("Total Draw = %d\n\n", drawcount);

        if (mycount == compcount)
        {
            printf("Match Draw Successfully!! :/");
        }
        else if (mycount > compcount)
        {
            printf("You are Winner!! Congratulations :)");
        }
        else
        {
            printf("You Lose!! Try again:(");
        }
        // getch();
        printf("\n\nPRESS 1 TO PLAY AGAIN");
        printf("\nPRESS 0 TO EXIT!!");
        x = getch();

    } while (x == '1');

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
        printf("Game Draw...");
    else if (result == 1)
    {
        printf("You Win...");
    }
    else
    {
        printf("You lose...");
    }
}