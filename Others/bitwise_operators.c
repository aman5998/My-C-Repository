#include<stdio.h>

int main(){
    int x = 78 & 19;
    int y = 34 | 21;
    int z = 67 ^ 45;
    int b = 56>>2;
    int a = 56<<2;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%d\n",b); 
    printf("%d\n",a); 
    return 0;
}