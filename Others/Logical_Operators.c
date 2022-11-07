#include<stdio.h>

int main(){
    int a = !(5>4);
    int x = 5>2 && 5>3;
    int e = 6>2 || 2>3;
    printf("%d\n",a);
    printf("%d\n",x);
    printf("%d\n",e);
    return 0;
}