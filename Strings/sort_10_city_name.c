/* Write a program to sort 10 city names stored in
two dimensional arrays, taken from the user. */

#include <stdio.h>
#include <string.h>

int main()
{
    int r, i, j;
    char city[10][15], temp[10];

    printf("Enter 10 city name: ");
    for (i = 0; i < 10; i++)
        gets(city[i]);

    for (i = 0; i < 10; i++)
        for (j = i + 1; j < 10; j++)
        {
            r = strcmp(city[i], city[j]);
            if (r > 0)
            {
                strcpy(temp, city[i]);
                strcpy(city[i], city[j]);
                strcpy(city[j], temp);
            }
        }
    printf("City names are now in sorted order\n");
    for (i = 0; i < 10; i++)
        printf("%s ", city[i]);
    return 0;
}