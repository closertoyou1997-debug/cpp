
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

// Rainbow + pink colors
int colors[] = {12, 6, 14, 10, 9, 3, 13, 11};
int colorIndex = 0;

// Move cursor to a position
void gotoxy(int x, int y)
{
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

// Change color after every star
void drawStar(int x, int y)
{
    SetConsoleTextAttribute(console, colors[colorIndex]);
    gotoxy(x, y);
    cout << "*";

    colorIndex++;
    if (colorIndex >= 8)
        colorIndex = 0;

    Sleep(80);
}

int main()
{
    int i, j;

    system("color 0F");
    system("cls");

    // =============== LETTER R ===============
    for (i = 10; i >= 2; i--)
        drawStar(35, i);

    for (j = 36; j <= 41; j++)
        drawStar(j, 2);

    for (i = 3; i <= 5; i++)
        drawStar(41, i);

    for (j = 36; j <= 41; j++)
        drawStar(j, 6);

    for (i = 1; i <= 4; i++)
        drawStar(37 + i, 6 + i);

    // =============== LETTER A ===============
    for (i = 0; i <= 4; i++)
        drawStar(48 - i, 2 + i);

    for (i = 0; i <= 4; i++)
        drawStar(48 + i, 2 + i);

    for (i = 6; i <= 10; i++)
        drawStar(44, i);

    for (i = 6; i <= 10; i++)
        drawStar(52, i);

    for (j = 44; j <= 52; j++)
        drawStar(j, 6);

    // =============== FIRST B (ROUNDED) ===============
    for (i = 10; i >= 2; i--)
        drawStar(56, i);

    for (j = 57; j <= 60; j++)
        drawStar(j, 2);

    drawStar(61, 3);
    drawStar(62, 4);
    drawStar(62, 5);

    for (j = 57; j <= 60; j++)
        drawStar(j, 6);

    drawStar(62, 7);
    drawStar(62, 8);
    drawStar(61, 9);

    for (j = 57; j <= 60; j++)
        drawStar(j, 10);

    // =============== SECOND A ===============
    for (i = 0; i <= 4; i++)
        drawStar(70 - i, 2 + i);

    for (i = 0; i <= 4; i++)
        drawStar(70 + i, 2 + i);

    for (i = 6; i <= 10; i++)
        drawStar(66, i);

    for (i = 6; i <= 10; i++)
        drawStar(74, i);

    for (j = 66; j <= 74; j++)
        drawStar(j, 6);

    // =============== SECOND B (ROUNDED) ===============
    for (i = 10; i >= 2; i--)
        drawStar(78, i);

    for (j = 79; j <= 82; j++)
        drawStar(j, 2);

    drawStar(83, 3);
    drawStar(84, 4);
    drawStar(84, 5);

    for (j = 79; j <= 82; j++)
        drawStar(j, 6);

    drawStar(84, 7);
    drawStar(84, 8);
    drawStar(83, 9);

    for (j = 79; j <= 82; j++)
        drawStar(j, 10);

    // =============== SECOND LINE: A ===============
    for (i = 0; i <= 4; i++)
        drawStar(20 - i, 15 + i);

    for (i = 0; i <= 4; i++)
        drawStar(20 + i, 15 + i);

    for (i = 19; i <= 23; i++)
        drawStar(16, i);

    for (i = 19; i <= 23; i++)
        drawStar(24, i);

    for (j = 16; j <= 24; j++)
        drawStar(j, 19);

    // =============== LETTER B (ROUNDED) ===============
    for (i = 15; i <= 23; i++)
        drawStar(27, i);

    // Top curve
    for (j = 28; j <= 31; j++)
        drawStar(j, 15);

    drawStar(32, 16);
    drawStar(33, 17);
    drawStar(33, 18);

    // Middle edge
    for (j = 28; j <= 31; j++)
        drawStar(j, 19);

    // Bottom curve
    drawStar(33, 20);
    drawStar(33, 21);
    drawStar(32, 22);

    for (j = 28; j <= 31; j++)
        drawStar(j, 23);

    // =============== LETTER D (ROUNDED) ===============
    for (i = 15; i <= 23; i++)
        drawStar(36, i);

    // Top curve
    for (j = 37; j <= 39; j++)
        drawStar(j, 15);

    drawStar(40, 16);
    drawStar(41, 17);
    drawStar(42, 18);
    drawStar(43, 19);

    // Bottom curve
    drawStar(42, 20);
    drawStar(41, 21);
    drawStar(40, 22);

    for (j = 37; j <= 39; j++)
        drawStar(j, 23);

   
    // =============== LETTER U (ROUNDED) ===============
    for (i = 15; i <= 20; i++)
    {
        drawStar(45, i);
        drawStar(51, i);
    }

    drawStar(45, 21);
    drawStar(51, 21);

    drawStar(46, 22);
    drawStar(50, 22);

    for (j = 47; j <= 49; j++)
        drawStar(j, 23);

    // =============== LETTER L ===============
    for (i = 15; i <= 23; i++)
        drawStar(54, i);

    for (j = 54; j <= 60; j++)
        drawStar(j, 23);

    // =============== LETTER H ===============
    for (i = 15; i <= 23; i++)
    {
        drawStar(63, i);
        drawStar(69, i);
    }

    for (j = 63; j <= 69; j++)
        drawStar(j, 19);

    // =============== SECOND A ===============
    for (i = 0; i <= 4; i++)
    {
        drawStar(77 - i, 15 + i);
        drawStar(77 + i, 15 + i);
    }

    for (i = 20; i <= 23; i++)
    {
        drawStar(73, i);
        drawStar(81, i);
    }

    for (j = 73; j <= 81; j++)
        drawStar(j, 19);

    // =============== LETTER F ===============
    for (i = 15; i <= 23; i++)
        drawStar(84, i);

    for (j = 84; j <= 90; j++)
    {
        drawStar(j, 15);
        drawStar(j, 19);
    }

    // =============== FIRST E ===============
    for (i = 15; i <= 23; i++)
        drawStar(93, i);

    for (j = 93; j <= 99; j++)
    {
        drawStar(j, 15);
        drawStar(j, 19);
        drawStar(j, 23);
    }

    // =============== SECOND E ===============
    for (i = 15; i <= 23; i++)
        drawStar(102, i);

    for (j = 102; j <= 108; j++)
    {
        drawStar(j, 15);
        drawStar(j, 19);
        drawStar(j, 23);
    }

    // =============== LETTER Z ===============
    for (j = 111; j <= 117; j++)
    {
        drawStar(j, 15);
        drawStar(j, 23);
    }

    for (i = 16; i <= 22; i++)
        drawStar(118 - (i - 15), i);

    // =============== FOOTER ===============
    const char* footer = "RABAB ABDULHAFEEZ";

    for (i = 0; footer[i] != '\0'; i++)
    {
        SetConsoleTextAttribute(console, colors[colorIndex]);
        gotoxy(55 + i, 26);
        cout << footer[i];

        colorIndex++;
        if (colorIndex >= 8)
            colorIndex = 0;

        Sleep(80);
    }

    // =============== EXIT MESSAGE ===============
    SetConsoleTextAttribute(console, 15);
    gotoxy(2, 28);
    cout << "Press any key to exit...";

    _getch();
    return 0;
}

