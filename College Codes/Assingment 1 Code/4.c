#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 18)
        printf("You are a child\n");
    else if (age > 60)
        printf("You are a senior citizen\n");
    else
        printf("You are a adult(Suggestion don't watch adult movies)\n");
    return 0;
}