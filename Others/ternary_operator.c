#include<stdio.h>

int main(){
    int num;
    printf("Input a number :");
    scanf("%d", &num);
    (num>0)?printf("positive"):printf("non-positive");
    return 0;
}