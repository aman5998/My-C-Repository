#include <stdio.h>

int main(){
    int num, sq;
    printf("Enter a number: ");
    scanf("%d", &num);
    sq = (num * num);
    printf("The square of given number %d is %d", num, sq);
    return 0;
}