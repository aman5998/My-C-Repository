// 6. Write a program in C to check
// whether an input is vowel or consonant.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter An Alphabet: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

        printf("%c is a vowel.", ch);
    else
        printf("%c is a consonant.", ch);

    return 0;
}