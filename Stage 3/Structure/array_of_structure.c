#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee facebook[100];

    facebook[0].code = 432411;
    facebook[0].salary = 6000.23;
    strcpy(facebook[0].name, "Aman");

    facebook[1].code = 432412;
    facebook[1].salary = 5340.11;
    strcpy(facebook[1].name, "Aniket");

    facebook[2].code = 432413;
    facebook[2].salary = 5973.89;
    strcpy(facebook[2].name, "Mala");
    printf("Done");
    
    return 0;
}