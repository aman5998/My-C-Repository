#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Structure of the employee
struct emp
{
    char name[50];
    float salary;
    int age;
    int id;
};
struct emp e; // This is global variable

// size of the structure
long int size = sizeof(e); // This size variable contains the size of (struct emp) e variable

FILE *fp, *ft;

// Function to add records
void addRecord()
{
    system("cls");
    fseek(fp, 0, SEEK_END);
    char another = 'y';

    while (another == 'y')
    {
        printf("\nEnter Name: ");
        gets(e.name);

        printf("\nEnter Age: ");
        scanf("%d", &e.age);

        printf("\nEnter Salary :");
        scanf("%f", &e.salary);

        printf("\nEnter EMP-ID: ");
        scanf("%d", &e.id);

        fwrite(&e, size, 1, fp);

        printf("\nWant to add another record (Y/N): ");

        fflush(stdin);

        scanf("%c", another);
    }
}

// Function to delete the records
void deleteRecord()
{
    system("cls");
    char empname[50];
    char another = 'y';

    while (another == 'y')
    {
        printf("\nEnter employee name to delete: ");
        gets(empname);

        ft = fopen("temp.txt", "wb");
        rewind(fp);

        while (fread(&e, size, 1, fp) == 1)
        {
            if (strcmp(e.name, empname) != 0)
                fwrite(&e, size, 1, fp);
        }

        fclose(fp);
        fclose(ft);
        remove("data.txt");
        rename("temp.txt", "data.txt");
        fp = fopen("data.txt", "rb+");

        printf("\nWant to delete another record (Y/N) :");
        fflush(stdin);
        another = getche();
    }
}

// Function to display the record
void displayRecord()
{
    system("cls");

    // sets pointer to start of the file
    rewind(fp);

    printf("\n==========================================================");
    printf("\nNAME\t\tAGE\t\tSALARY\t\tID\n", e.name, e.age, e.salary, e.id);
    printf("==========================================================\n");

    while (fread(&e, size, 1, fp) == 1)
    {
        printf("\n%s\t\t%d\t\t%.2f\t%10d", e.name, e.age, e.salary, e.id);
    }

    printf("\n\n\n\t");
    system("pause");
}

//// Function to modify the record
void modifyRecord()
{
    system("cls");
    char empname[50];
    char another = 'y';

    while (another == 'y')
    {
        printf("Enter employee name to modify: ");
        gets(empname);

        rewind(fp);

        // While file is open
        while (fread(&e, size, 1, fp) == 1)
        {
            // Compare the employee name with empname
            if (strcmp(e.name, empname) == 0)
            {
                printf("\nEnter new name:");
                scanf("%s", e.name);
                printf("\nEnter new age :");
                scanf("%d", &e.age);
                printf("\nEnter new salary :");
                scanf("%f", &e.salary);
                printf("\nEnter new EMP-ID :");
                scanf("%d", &e.id);

                fseek(fp, -size, SEEK_CUR);
                fwrite(&e, size, 1, fp);
                break;
            }
        }
        // Ask for modifying another record
        printf("\nWant to modify another record (Y/N) :");
        fflush(stdin);
        scanf("%c", &another);
    }
}

// Driver code
int main()
{
    int choice;
    scanf("%d", &choice);

    // opening the file
    fp = fopen("data.txt", "rb+");

    // showing error if file is unable to open
    if (fp == NULL)
    {
        fp = fopen("data.txt", "wb+");
        if (fp == NULL)
        {
            printf("\nCannot open file...");
            exit(1);
        }
    }

    system("Color 4F");
    printf("\n\n\n\n\t\t\t\t=====================================================");
    printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t\t=====================================================");
    printf("\n\t\t\t\t[|:::>:::>:::>::> EMPLOYEE RECORD  <::<:::<:::<:::|]\t");
    printf("\n\t\t\t\t=====================================================");
    printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t\t=====================================================\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tDeveloper : @Aman_Kr_Shaw\n\n\t\t\t\t");

    system("pause");

    // Switch Case
    switch (choice)
    {
    case 1:

        // Add the records
        addRecord();
        break;

    case 2:

        // Delete the records
        deleteRecord();
        break;

    case 3:

        // Display the records
        displayRecord();
        break;

    case 4:

        // Modify the records
        modifyRecord();
        break;

    case 5:
        fclose(fp);
        exit(0);
        break;

    default:
        printf("\nINVALID CHOICE...\n");
    }

    return 0;
}