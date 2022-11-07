#include<stdio.h>

int main(){
    int a[100] = {2},i;
    a[0] = 556;
    for ( i = 0; i <= 99; i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}