#include<stdio.h>
int gcd(int a,int b);
int main(){
    int k;
    k = gcd(56,13);
    printf("%d",k);
    return 0;
}
int gcd(int a,int b)
{
    while(a!=b)
     {
          if(a>b)
              return gcd(a-b,b);
          else
             return gcd(a,b-a);
     }
     return a;
}
