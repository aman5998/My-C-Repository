#include <stdio.h>

int main()
{
    int sort[8] = {20, 50, 90, 60, 70, 80, 30, 10}, temp;
    for (int i = 0; i < 8; i++)
        for (int j = i + 1; j < 8; j++)
        {
            if (sort[i] > sort[j])
            {
                temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    
    printf("In sorted order--> ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",sort[i]);
    }
    return 0;
}