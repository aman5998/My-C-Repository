/* Enter Marks of Five Subjects and Calculate
Total, Average, Percentage using C programing */

#include <stdio.h>

int main()
{
    float eng, phy, chem, math, comp;
    float total, avg, percentage;

    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

    total = (phy + chem + math + comp + eng);
    avg = (phy + chem + math + comp + eng) / 5.0;
    percentage = total / 500.0 * 100;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", avg);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}