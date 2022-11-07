#include<stdio.h>

int main(){
    int a = 34,b = 45;
    int *ptr = &a;
    int *ptr2 = &b;
    printf("The value of ptr is before increment %d \n", ptr);
    int c = ptr-ptr2;
    printf("Subtraction of a pointer to another pointer is %d \n", c);
    return 0;
}