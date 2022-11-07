#include <stdio.h>

int main()
{
    char *str = "Aman Bhai";
    str = "Ronit Bhai"; // You can reinitialize the value by pointer string

    char str2[] = "Aniket Bhai";
    // str2 = "Ronit Bhai";  // This is not possible

    printf("%s\n", str);
    printf("%s\n", str2);
    return 0;
}