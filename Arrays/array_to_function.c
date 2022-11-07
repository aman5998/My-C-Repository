#include <stdio.h>
void printArrays(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
        printf("The value of %d is %d\n", i + 1, ptr[i]);   
}
int main()
{
    int arr[] = {43,545,41,12,69,52,66,76,443};
    printArrays(arr,9);
    return 0;
}