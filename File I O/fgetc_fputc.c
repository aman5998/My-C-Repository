#include <stdio.h>

int main()
{
    FILE *ptr;
    // fgetc demo for reading a file
    // ptr = fopen("fgetcdemo.txt", "r");
    // // char ch = fgetc(ptr);
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));
    // printf("The value of character is %c\n", fgetc(ptr));

    ptr = fopen("fputcdemo.txt", "w");
    fputc('h', ptr);
    fputc('e', ptr);
    fputc('l', ptr);
    fputc('l', ptr);
    fputc('o', ptr);
    fputc(' ', ptr);
    fputc('w', ptr);
    fputc('o', ptr);
    fputc('r', ptr);
    fputc('l', ptr);
    fputc('d', ptr);
    fclose(ptr);
    return 0;
}