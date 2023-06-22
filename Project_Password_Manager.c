#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
#define time 4

#define max_size 50
#define max_account 100

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void animation()
{
    printf("\e[?25l");
    system("COLOR 1");
    printf("\e[?25l");

    // for P

    for (int i = 0; i < 8; i++)
    {
        gotoxy(14, 10 + i);
        printf("P");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(15, 10 + i);
        printf("P");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 6; i++)
    {
        gotoxy(15 + i, 10);
        printf("P");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 2; i++)
    {
        gotoxy(21, 11 + i);
        printf("P");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 5; i > 0; i--)
    {
        gotoxy(15 + i, 13);
        printf("P");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 6; i++)
    {
        gotoxy(15 + i, 11);
        printf("P");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(15 + i, 12);
        printf("P");
        printf("\e[?25l");
        Sleep(time);
    }

    // for A

    for (int i = 0; i < 7; i++)
    {
        gotoxy(27 + i, 10 + i);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 7; i > 0; i--)
    {
        gotoxy(20 + i, 17 - i);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 7; i++)
    {
        gotoxy(24 + i, 13);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    // for S

    for (int i = 0; i < 7; i++)
    {
        gotoxy(37 + i, 10);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(37, 10 + i);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 6; i++)
    {
        gotoxy(37 + i, 13);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(43, 13 + i);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 7; i > 0; i--)
    {
        gotoxy(36 + i, 16);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    // for S

    for (int i = 0; i < 6; i++)
    {
        gotoxy(46 + i, 10);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(45, 10 + i);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 7; i++)
    {
        gotoxy(45 + i, 13);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(51, 13 + i);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 7; i > 0; i--)
    {
        gotoxy(44 + i, 16);
        printf("S");
        printf("\e[?25l");
        Sleep(time);
    }

    // for underline

    for (int i = 8; i > 0; i--)
    {
        gotoxy(54 - i, 17);
        printf(">");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(34 + i, 17);
        printf("<");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
    }
    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf("^");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(53, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(35, 17 - i);
        printf(" ");
        printf("\e[?25l");
        Sleep(time);
    }

    // for logo

    for (int i = 0; i < 10; i++)
    {
        gotoxy(61 + i, 16);
        printf("**");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 10; i++)
    {
        gotoxy(61 + i, 16);
        printf("**");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 10; i > 0; i--)
    {
        gotoxy(60 + i, 15);
        printf("**");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 10; i++)
    {
        gotoxy(61 + i, 14);
        printf("**");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 10; i > 0; i--)
    {
        gotoxy(60 + i, 13);
        printf("**");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(63, 12 - i);
        printf("*");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 6; i++)
    {
        gotoxy(63 + i, 10);
        printf("*");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(69, 10 + i);
        printf("*");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 11; i++)
    {
        gotoxy(61 + i, 18);
        if (i % 2 != 0)
            continue;
        printf("*");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 18; i++)
    {
        gotoxy(57 + i, 8);
        printf("#");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(57 + i, 7);
        printf("#");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(57, 7 + i);
        if (i > 11)
            continue;
        printf("#");
        /// Sleep(time);
        gotoxy(56, 7 + i);
        printf("#");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 19; i++)
    {
        gotoxy(74 - i, 19);
        printf("#");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(74, 19 - i);
        if (i > 12)
            continue;
        printf("#");
        printf("\e[?25l");
        Sleep(time);
    }

    // for W

    for (int i = 0; i < 7; i++)
    {
        gotoxy(79, 10 + i);
        printf("W");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(80 + i, 16 - i);
        printf("W");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(85 + i, 12 + i);
        printf("W");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 7; i > 0; i--)
    {
        gotoxy(90, 9 + i);
        printf("W");
        printf("\e[?25l");
        Sleep(time);
    }

    // for O

    for (int i = 7; i > 0; i--)
    {
        gotoxy(95, 9 + i);
        printf("O");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(102 - i, 16);
        printf("O");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(95 + i, 10);
        printf("O");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(102, 9 + i);
        printf("O");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 4; i > 0; i--)
    {

        gotoxy(101 - i, 12);
        printf("O");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(101 - i, 13);
        printf("O");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(101 - i, 14);
        printf("O");
        printf("\e[?25l");
        Sleep(time);
    }

    // for R

    for (int i = 0; i < 7; i++)
    {
        gotoxy(106, 10 + i);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 7; i++)
    {
        gotoxy(106 + i, 10);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(106 + i, 13);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(106 + i, 11);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(106 + i, 12);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(106 + i, 10);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(106 + i, 13);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(111 + i, 14 + i);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    // for D

    for (int i = 0; i < 7; i++)
    {
        gotoxy(118, 16 - i);
        printf("D");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(119 + i, 10);
        printf("D");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 2; i++)
    {
        gotoxy(124 + i, 10 + i);
        printf("D");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(126, 12 + i);
        printf("D");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 2; i++)
    {
        gotoxy(124 + i, 16 - i);
        printf("D");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(123 - i, 16);
        printf("D");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(119 + i, 11);
        printf("DD");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(119 + i, 12);
        printf("DDD");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(119 + i, 13);
        printf("DDD");
        printf("\e[?25l");
        gotoxy(119 + i, 14);
        printf("DDD");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(119 + i, 15);
        printf("DD");
        printf("\e[?25l");
        Sleep(time);
    }

    // for 1st arrow

    for (int i = 0; i < 10; i++)
    {
        gotoxy(128 + i, 10);
        printf("->");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(128 + i, 11);
        printf("->");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(128 + i, 12);
        printf("->");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(128 + i, 13);
        printf("->");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(128 + i, 14);
        printf("->");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(128 + i, 15);
        printf("->");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(128 + i, 16);
        printf("->");
        printf("\e[?25l");
        Sleep(time);
    }

    // for 2nd arrow

    for (int i = 0; i < 22; i++)
    {
        gotoxy(137 - i, 23);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 24);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 25);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 26);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 27);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 28);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 29);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 30);
        printf("<-");
        printf("\e[?25l");
        /// Sleep(time);
        gotoxy(137 - i, 31);
        printf("<-");
        printf("\e[?25l");
        Sleep(time);
    }

    // for M

    for (int i = 0; i < 7; i++)
    {
        gotoxy(14, 24 + i);
        printf("M");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(23, 24 + i);
        printf("M");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(14 + i, 24 + i);
        printf("M");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(23 - i, 24 + i);
        printf("M");
        printf("\e[?25l");
        Sleep(time);
    }

    // for A

    for (int i = 0; i < 7; i++)
    {
        gotoxy(34 + i, 24 + i);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 7; i > 0; i--)
    {
        gotoxy(27 + i, 31 - i);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(32 + i, 27);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    // for N

    for (int i = 0; i < 7; i++)
    {
        gotoxy(45, 24 + i);
        printf("N");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 7; i++)
    {
        gotoxy(46 + i, 24 + i);
        printf("N");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 7; i++)
    {
        gotoxy(53, 30 - i);
        printf("N");
        printf("\e[?25l");
        Sleep(time);
    }

    // for A

    for (int i = 0; i < 7; i++)
    {
        gotoxy(64 + i, 24 + i);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 7; i > 0; i--)
    {
        gotoxy(57 + i, 31 - i);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(62 + i, 27);
        printf("A");
        printf("\e[?25l");
        Sleep(time);
    }

    // for G

    for (int i = 9; i > 0; i--)
    {
        gotoxy(74 + i, 24);
        printf("G");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 6; i++)
    {
        gotoxy(75, 25 + i);
        printf("G");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 8; i++)
    {
        gotoxy(76 + i, 30);
        printf("G");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 4; i++)
    {
        gotoxy(83, 30 - i);
        printf("G");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 5; i++)
    {
        gotoxy(83 - i, 27);
        printf("G");
        printf("\e[?25l");
        Sleep(time);
    }

    // for E

    for (int i = 0; i < 7; i++)
    {
        gotoxy(87, 24 + i);
        printf("E");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 10; i++)
    {
        gotoxy(88 + i, 24);
        printf("E");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(88 + i, 30);
        printf("E");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 7; i++)
    {
        gotoxy(88 + i, 27);
        printf("E");
        printf("\e[?25l");
        Sleep(time);
    }

    // for R

    for (int i = 0; i < 7; i++)
    {
        gotoxy(102, 24 + i);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 6; i++)
    {
        gotoxy(103 + i, 24);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(103 + i, 27);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 7; i++)
    {
        gotoxy(103 + i, 25);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
        gotoxy(103 + i, 26);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    for (int i = 0; i < 4; i++)
    {
        gotoxy(107 + i, 27 + i);
        printf("R");
        printf("\e[?25l");
        Sleep(time);
    }

    // for the full area

    for (int i = 0; i < 75; i++)
    {
        gotoxy(80 + i, 34);
        printf(">");
        printf("\e[?25l");
        Sleep(5);
        gotoxy(80 + i, 35);
        printf(">");
        printf("\e[?25l");
        Sleep(5);
        gotoxy(80 + i, 36);
        printf(">");
        printf("\e[?25l");
        Sleep(5);
        gotoxy(80 - i, 34);
        printf("<");
        printf("\e[?25l");
        Sleep(5);
        gotoxy(80 - i, 35);
        printf("<");
        printf("\e[?25l");
        Sleep(5);
        gotoxy(80 - i, 36);
        printf("<");
        printf("\e[?25l");
        Sleep(5);
    }

    // for flame

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("^ ^ ^ ^ ^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("     ");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("             ");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("^ ^ ^ ^ ^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("     ");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("             ");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("^ ^ ^ ^ ^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("     ");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("             ");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("^ ^ ^ ^ ^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("     ");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("             ");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("^ ^ ^ ^ ^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("     ");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("             ");
        printf("\e[?25l");
        Sleep(10);
    }

    for (int i = 0; i < 30; i++)
    {
        gotoxy(6, 33 - i);
        printf("^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
        gotoxy(142, 33 - i);
        printf("^ ^ ^ ^ ^ ^ ^");
        printf("\e[?25l");
        Sleep(10);
    }

    system("cls");
    /// Sleep(10);
}






struct user
{
    char username[max_size];
    char password[max_size];
};

void signup()
{
    struct user user;

    printf("Enter the username: ");
    scanf(" %[^\n]", user.username);
    user.username[strcspn(user.username, "\n")] = '\0';

    printf("Enter the password: ");
    scanf(" %[^\n]", user.password);
    user.password[strcspn(user.password, "\n")] = '\0';

    FILE *fp;
    fp = fopen("data.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file...\n");
        return;
    }

    fprintf(fp, "%s;%s\n", user.username, user.password);
    fclose(fp);

    printf("\n\nAccount created successfully!\n\n");
}

int signin()
{
    char username[max_size];
    char password[max_size];

    printf("Enter the username: ");
    scanf(" %[^\n]", username);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter the password: ");
    scanf(" %[^\n]", password);
    password[strcspn(password, "\n")] = '\0';

    FILE *fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file...\n");
        return 0;
    }

    char line[max_size * 2];
    struct user user;

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        sscanf(line, "%[^;];%[^\n]", user.username, user.password);
        if (strcmp(user.username, username) == 0 && strcmp(user.password, password) == 0)
        {
            fclose(fp);
            return 1; // Login successful
        }
    }

    fclose(fp);
    return 0; // Login failed
}

struct accountentry
{
    char sitename[max_size];
    char username[max_size];
    char password[max_size];
};

struct accountentry entry[max_account];

void addAccount()
{
    int i = 0;
    while (1)
    {
        printf("Enter the Site name: ");
        scanf(" %[^\n]", entry[i].sitename);
        entry[i].sitename[strcspn(entry[i].sitename, "\n")] = '\0';

        printf("Enter the Username: ");
        scanf(" %[^\n]", entry[i].username);
        entry[i].username[strcspn(entry[i].username, "\n")] = '\0';

        printf("Enter the Password: ");
        scanf(" %[^\n]", entry[i].password);
        entry[i].password[strcspn(entry[i].password, "\n")] = '\0';

        FILE *fp;
        fp = fopen("data.txt", "a");
        if (fp == NULL)
        {
            printf("Error opening file...\n");
            return;
        }

        fprintf(fp, "%s;%s;%s\n", entry[i].sitename, entry[i].username, entry[i].password);
        fclose(fp);
        printf("\n\nAccount added successfully!\n\n");

        char choice;
        printf("\n\nDo you want to add more accounts, sir? (y/n || Y/N): ");
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            i++;
            if (i == max_account)
            {
                printf("\n\nMaximum account limit reached.\n\n");
                break;
            }
        }
        else if (choice == 'N' || choice == 'n')
        {
            printf("\npassword manager: Okay, sir, as per your choice.\n\n");
            break;
        }
        else
        {
            printf("\npassword manager: Invalid choice, sir.\n\n");
        }
    }
}

void viewPasswords()
{
    char username[max_size];

    printf("Enter your site username: ");
    scanf(" %[^\n]", username);
    username[strcspn(username, "\n")] = '\0';

    FILE * fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file...\n");
        return;
    }

    int count = 0;
    char line[max_size * 3]; /// 150

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        struct accountentry acc;
        sscanf(line, "%[^;];%[^;];%[^\n]", acc.sitename, acc.username, acc.password);
        if (strcmp(acc.username, username) == 0)
        {
            printf("Website: %s\n", acc.sitename);
            printf("Username: %s\n", acc.username);
            printf("Password: %s\n\n", acc.password);
            count++;
        }
    }

    if (count == 0)
    {
        printf("\n\nNo passwords found for the given user.\n\n");
    }

    fclose(fp);
}

/// rsa algorothm

long int p, q, n, t, flag, e[100], d[100], temp[100], j, m[100], en[100], k;
char msg[100];
int prime(long int);
void ce();
long int cd(long int);
void encrypt();
void decrypt();

void rsa()
{
    ///printf("\nEnter first prime number (p): ");
    ///scanf("%ld", &p);
    p = 7;/// fixed value anik eta
    flag = prime(p);
    if (flag == 0)
    {
        printf("\nWrong input\n");
        exit(1);
    }

    ///printf("Enter second prime number (q): ");
    ///scanf("%ld", &q);
    q = 19;/// eta fixed for testing purpose
    flag = prime(q);
    if (flag == 0 || p == q)
    {
        printf("\nWrong input\n");
        exit(1);
    }

    printf("Enter the message you want to sent: ");
    scanf(" %[^\n]", msg);

    for (k = 0; msg[k] != '\0'; k++)
        m[k] = msg[k];
    n = p * q;
    t = (p - 1) * (q - 1);
    ce();

    printf("\nPossible values of e and d are:\n");
    for (k = 0; k < j - 1; k++)
        printf("e[%ld] --- %ld ; d[%ld] --- %ld\n", k, e[k], k, d[k]);

    encrypt();
}

int prime(long int pr)/// eita sheet er function tekhe newa...duita way ache n/2 or sqrt(n) ---- time complexity
{
    int i;
    j = sqrt(pr);
    for (i = 2; i <= j; i++)
    {
        if (pr % i == 0)
            return 0;
    }
    return 1;
}

void ce()
{
    int k;
    k = 0;
    for (int i = 2; i < t; i++)
    {
        if (t % i == 0)
            continue;
        flag = prime(i);
        if (flag == 1 && i != p && i != q)
        {
            e[k] = i;
            flag = cd(e[k]);
            if (flag > 0)
            {
                d[k] = flag;
                k++;
            }
            if (k == 100 - 1)
                break;
        }
    }
}

long int cd(long int x)
{
    long int k = 1;
    while (1)
    {
        k = k + t;
        if (k % x == 0)
            return (k / x);
    }
}

void encrypt()
{
    long int pt, ct, key = e[0], len;
    int i = 0;
    len = strlen(msg);
    while (i != len)
    {
        pt = m[i];
        pt = pt - 96;
        long int k = 1;
        for (j = 0; j < key; j++)
        {
            k = k * pt;
            k = k % n;
        }
        temp[i] = k;
        ct = k + 96;
        en[i] = ct;
        i++;
    }
    en[i] = -1;

    FILE *fp = fopen("sms.txt", "w");
    if (fp == NULL)
    {
        printf("Error file opening...\n");
        return;
    }

    printf("\nThe encrypted message is printed to the file --- 'sms.txt'.\n");

    for (i = 0; en[i] != -1; i++)
    {
        fprintf(fp, "%c", en[i]);
    }
    fclose(fp);
}

void decrypt()
{
    FILE *fp = fopen("sms.txt", "r");
    if (fp == NULL)
    {
        printf("Error file opening...\n");
        return;
    }

    fscanf(fp, " %[^\n]", en);
    fclose(fp);

    long int pt, ct, key = d[0];
    int i = 0;
    while (en[i] != -1)
    {
        ct = temp[i];
        long int k = 1;
        for (j = 0; j < key; j++)
        {
            k = k * ct;
            k = k % n;
        }
        pt = k + 96;
        m[i] = pt;
        i++;
    }
    m[i] = -1;

    printf("\nThe decrypted message is: ");
    for (i = 0; m[i] != -1; i++)
    {
        printf("%c", m[i]);
    }
    printf("\n");
}

void sendmeassage()
{
    rsa();/// calling rsa function for print encrypted meassage
}

void readmeassage()
{
    decrypt();/// calling decrypt function for read the meassage in decrypted way
}

void AboutUs()
{
    printf("\t\t\t\t\t   =================================\n");
    printf("\t\t\t\t\t   Password Manager -- About Us \n");
    printf("\t\t\t\t\t   =================================\n\n\n");


    printf("\t\t\t\tMOHI UDDIN MARUF         \t\tAHMED RAFI\n");

    printf("\t\t\t\tC-231086                  \t\tC-231095\n\n\n");

    printf("\t\t\t\tARNAB BISWAS               \t\tANIK CHAKRABORTY\n");

    printf("\t\t\t\tC-223089                  \t\tC-231109\n\n\n");


    printf("\t\t\t\tcontact us :        support@passwordmanager.com\n\n");

    printf("\t\t\t\tThank you for choosing our password manager!\n");
}



int main()
{
    int choice;
    animation();
jump:
    do
    {
        system("COLOR 1");
        printf("----Password Manager----\n\n\n");
        printf("1. Create a new account\n");
        printf("2. Login your account\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            signup();
            break;
        case 2:
            if (signin())
            {
                printf("Login successfully...\n\n");
                int userChoice;
                do
                {
                    system("COLOR 2");
                    printf("\n\n\n");
                    printf("----Password Manager----\n\n\n");
                    printf("1. Add account\n");
                    printf("2. View passwords\n");
                    printf("3. Print encrypted meassage\n");
                    printf("4. Read decrypted meassage\n");
                    printf("5. About US\n");
                    printf("6. Logout\n");
                    printf("Enter your choice: ");
                    scanf("%d", &userChoice);

                    switch (userChoice)
                    {
                    case 1:
                        addAccount();
                        break;
                    case 2:
                        viewPasswords();
                        break;

                    /// rsa algorithm function
                    case 3:
                        sendmeassage();
                        break;
                    case 4:
                        readmeassage();
                        break;

                    case 6:
                        printf("\n\nLogging out...\n");
                        goto jump;
                        break;

                    case 5:
                        AboutUs();
                        break;
                    default:
                        printf("Invalid choice. Try again.\n");
                    }

                    printf("\n");
                }
                while (userChoice != 6);
            }
            else
            {
                printf("\n\nLogin failed. Invalid username or password.\n\n");
            }
            break;
        case 3:
            printf("\n\n\nS A Y O N A R A...\n");
            break;
        default:
            printf("\nInvalid choice. Try again.\n");
        }
        printf("\n");
    }
    while (choice != 3);


    return 0;
}

