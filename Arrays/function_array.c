#include <stdio.h>
void input(int b[], int n);
int main()
{
    int arr[8];
    input(arr, 8);
    return 0;
}
void input(int b[], int n)
{
    int i;
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
}