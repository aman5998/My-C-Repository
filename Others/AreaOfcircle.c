#include<stdio.h>

int main(){
    float radius;
    float p = 3.14159,area;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    area = p*radius*radius; 
    printf("The Area of circle is %f", area);
    return 0;
}