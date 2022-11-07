#include <stdio.h>
int count(int a[], int n);

int main()
{
    int a[] = {1, -2, 3, -4, 5, 6, -7, 8};
    int d = count(a, 8);
    printf("%d", d);
    return 0;
}
int count(int a[], int n)
{
    int posiInt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            posiInt++;
    }
    return posiInt;
}