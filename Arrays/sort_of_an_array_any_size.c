#include <stdio.h>
void sorting(int sort[], int n);

int main()
{
    int a[] = {1, 3, 6, 7, 10, 2, 8, 5};
    sorting(a, 8);
    return 0;
}
void sorting(int sort[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sort[i] > sort[j])
            {
                temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
    printf("In sorted order--> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sort[i]);
    }
}