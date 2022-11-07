/*Write a program to find out whether a student is pass or fail.
if it requires total 40% and at least 33% in each subject to pass.
Assume 3 subjects and take marks as an input from the user.*/

#include <stdio.h>

int main()
{
    float physics, chemistry, biology;
    float percentage;
    printf("Enter marks of physics: ");
    scanf("%f", &physics);
    printf("Enter marks of chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of biology: ");
    scanf("%f", &biology);
    percentage = (physics + chemistry + biology) / 3;
    if ((percentage >= 40) && physics >= 33 && chemistry >= 33 && biology >= 33)
        printf("Your total percentage is %.2f and your are pass\n", percentage);
    else
        printf("Your total percentage is %.2f and your are fail\n", percentage);

    if (physics<33)
        printf("You failed in Physics that's why you failed");
    else if (chemistry<33)
        printf("You failed in Chemistry that's why you failed");
    else if (biology<33)
        printf("You failed in Biology that's why you failed");
    return 0;
}