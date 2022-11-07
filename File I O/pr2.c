#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    printf("Enter the you need the table of: ");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, num * i);
    }
    fclose(ptr);
    printf("Successfully generated table of %d to table.txt",num);
    return 0;
} 