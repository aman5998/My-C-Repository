#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random numbers between 1 and 100
    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
            printf("Lower number please!\n");
        else if (guess < number)
            printf("Higher numbers please!\n");
        else
            printf("You guessed it in %d attemps\n", nguesses);
        nguesses++;
    } while (guess != number);

    return 0;
}