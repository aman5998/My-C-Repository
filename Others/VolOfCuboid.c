#include<stdio.h>

int main(){
    int l, w, h;
    printf("Enter the length of the cuboid: ");
    scanf("%d",&l);
    printf("Enter the width of the cuboid: ");
    scanf("%d",&w);
    printf("Enter the height of the cuboid: ");
    scanf("%d",&h);
    int Volume= l*w*h;
    printf("The of cuboid is %d",Volume);
    return 0;
}