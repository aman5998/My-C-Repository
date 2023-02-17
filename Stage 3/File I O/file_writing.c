#include <stdio.h>

int main()
{
    FILE *ptr;
    int number = 867;
    ptr = fopen("generated.txt", "w");
    fprintf(ptr, "The number is %d,\n", number);
    fprintf(ptr, "thanks for using fprintf\n", number);
    fprintf(ptr, "Hi, There i am learning c programming language file handling topic for first time in whole life\n", number);
    fprintf(ptr, "And i am happy because i learn new things today\n", number);

    fclose(ptr);

    return 0;
}