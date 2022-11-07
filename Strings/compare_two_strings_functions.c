// Write a function to compare two strings.

#include <stdio.h>
int mycmp(char st1[], char st2[]);

int main()
{
    char str1[30];
    printf("Enter string 1: ");
    fgets(str1, 30, stdin);

    char str2[30];
    printf("Enter string 2: ");
    fgets(str2, 30, stdin);

    int val = mycmp(str1, str2);
    if (val == 0)
        printf("Same");
    else
        printf("Not Same");
}

int mycmp(char st1[], char st2[])
{
    int flag = 0;
    for (int i = 0; st1[i] || st2[i]; i++)
    {
        if (st1[i] != st2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}