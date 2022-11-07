#include <stdio.h>

int main()
{
    int hr1, min1, sec1;
    int hr2, min2, sec2;
    int hr, min, sec;

    printf("Enter First Time: ");
    scanf("%d:%d:%d", &hr1, &min1, &sec1);
    printf("Enter Second Time: ");
    scanf("%d:%d:%d", &hr2, &min2, &sec2);

    sec = sec1 + sec2;
    min = min1 + min2 + (sec / 60);
    hr = hr1 + hr2 + (min / 60);
    min = min % 60;
    sec = sec % 60;

    printf("Total time is: %d Hours %d Minutes %d Seconds", hr, min, sec);
    
    return 0;
}