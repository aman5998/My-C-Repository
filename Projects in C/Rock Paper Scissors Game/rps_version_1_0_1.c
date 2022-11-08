#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissors(char you, char comp);

// Driver Code
int main()
{
    char you, comp;

    srand(time(0)); // this is random number generator
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
        comp = 's';
        
    system("cls");       // For clear the console
    system("Color  fc"); // Responsible for colorful console
    printf("Developer : Aman Kr Shaw\n\n");
    printf("Press any key to start...\n");
    getch();
    printf("\n\t\t<--Rock-Paper-Scissor-->\n");
    printf("\nGame Rules:-");
    printf("\nEnter 'r' for rock\nEnter 'p' for paper\nEnter 's' for scissors\n\n");
    printf("Choose your option: ");
    scanf("%c", &you);

    int result = rockpaperscissors(you, comp);

    if (result == 0)
        printf("\nGame Draw! Ohh No Not Again :/\n");
    else if (result == 1)
        printf("\nYou Win! Hurray!!\n");
    else
        printf("\nYou Lose! Better Luck Next Time :)\n");

    printf("\nYou choose %c and computer choose %c. \n", you, comp);
    printf("\nPRESS ENTER TO EXIT!!");
    getch();

    return 0;
}

int rockpaperscissors(char you, char comp) // Function for condition check
{
    // returns 1 if you win, -1 if you lose and 0 if draw

    // Condition for draw
    // Cases covered:
    // rock rock
    // paper paper
    // scissors scissors

    if (you == comp) //
        return 0;

    // Non-draw conditions
    // Cases covered:
    // rock scissors| scissors rock
    // paper rock| rock paper
    // scissors paper | paper scissors

    if (you == 'r' && comp == 's')
        return 1;
    else if (you == 's' && comp == 'r')
        return -1;

    if (you == 'p' && comp == 'r')
        return 1;
    else if (you == 'r' && comp == 'p')
        return -1;

    if (you == 's' && comp == 'p')
        return 1;
    else if (you == 'p' && comp == 's')
        return -1;
}