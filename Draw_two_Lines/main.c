#include <stdio.h>
#include <windows.h>

void gotoxy(int col,int row);

int main()
{
    int i,y;

    system("cls");

    gotoxy(1,12);

    for(i=0;i<75;i++)
    {
        printf("%c",196);
    }

    for(y=1;y<25;y++)
    {
        gotoxy(39,y);
        printf("%c",179);
    }

    return 0;
}

void gotoxy(int col, int row)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col,row};
    SetConsoleCursorPosition(hStdout,position);
}
