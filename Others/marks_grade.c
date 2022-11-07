/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following*/

#include <stdio.h>

int main()
{
    float physics, chemistry, biology, mathematics, computer;
    float percentage;

    printf("Enter marks of physics: ");
    scanf("%f", &physics);
    printf("Enter marks of chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of biology: ");
    scanf("%f", &biology);  
    printf("Enter marks of mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks of computer: ");
    scanf("%f", &computer);

    percentage = (physics + chemistry + biology + mathematics + computer) / 5;
    printf("%.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else if (percentage >= 40)
        printf("Grade E");
    else if (percentage < 40)
        printf("Grade Fail");

    return 0;
}