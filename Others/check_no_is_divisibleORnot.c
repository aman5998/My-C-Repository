#include <stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    // if (x % 5 == 0)
    if (x % 5)
        printf("not divisible");
    else
        printf("divisible");
    return 0;
}