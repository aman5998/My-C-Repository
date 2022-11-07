#include<stdio.h>

int main(){
    char input;
    printf("Enter a character: ");
    scanf("%c",&input);
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", input, input);
    return 0;
}