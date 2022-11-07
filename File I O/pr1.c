#include <stdio.h>

int main()
{
    FILE *ptr;
    int n1, n2, n3;
    ptr = fopen("pr1.txt", "r");
    fscanf(ptr, "%d", &n1);
    fscanf(ptr, "%d", &n2);
    fscanf(ptr, "%d", &n3);
    printf("The values of n1 n2 and n3 is %d %d %d", n1, n2, n3);
    return 0;
}