#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);

int main()
{
    gotoxy(20, 8);
    printf("Hello World");
    return 0;
}

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}