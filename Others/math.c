#include<stdio.h>
#include<math.h>

int main(){
    /*This ceil function in #include<math.h> roundup
    the float no. and make it an int like 3.5 = 4*/
    printf("%f\n",ceil(3.6));
    printf("%f\n",ceil(3.3));
    /*This floor function in #include<math.h> roundup
    the float no. and make it an int like 3.5 = 3*/
    printf("%f\n",floor(3.3));
    //square root of 
    printf("%f\n",sqrt(2));
    printf("%f\n",sqrt(7));
    //Power of 
    printf("%f\n",pow(10,3));
    //return positive number
    printf("%d\n",abs(-7));
    //to get length of the entered digit --> this is jugaad
    printf("%d\n",log10(324));

    return 0;
}