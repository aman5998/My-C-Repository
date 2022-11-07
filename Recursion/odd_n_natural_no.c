#include<stdio.h>
void odd(int n);

int main(){
    odd(9);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
        odd(n-1);
        printf("%d ",2*n-1);
    }
}