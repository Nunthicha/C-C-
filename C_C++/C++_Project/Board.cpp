#include "Board.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

Board::Board(const int gr, const int gc)
{
    int i,j;

    row = gr;
    column = gc;

    table =  new int*[row];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            table[i] = new int[column];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            table[i][j] = 0;
        }
    }
}

void Board::writedata(const int posr, const int posc, int *data, const int datarowsize, const int datacolsize)
{
    int i,j,x,y;

    for (i = posr, x = 0; i < row && x < datarowsize; i++,x++)
    {
        for (j = posc, y = 0; j < column && y < datacolsize; j++,y++)
        {
            table[i][j] = *(data + x*datacolsize + y);
        }
    }
}

void Board::writedata(const int posr, const int posc, const int data)
{
    int i,j;

    i = (posr < row-1)?posr:row-1;
    j = (posc < column-1)?posc:column-1;

    table[i][j] = data;
}

void Board::_swap(const int posr1, const int posc1, const int posr2, const int posc2)
{
    int tmp;

    if (posr1 >= row && posc1 >= column || posr2 >= row && posc2 >= column)
    {
        draw();
        cout << "\nPosition invalid.Can not swap.\n";
        getch();
        system("cls");
    }
    else
    {
        tmp = table[posr1][posc1];
        table[posr1][posc1] = table[posr2][posc2];
        table[posr2][posc2] = tmp;
    }

}

void Board::_move(const int posr1, const int posc1, const int posr2, const int posc2)
{
    int tmp;

    if (posr1 >= row && posc1 >= column || posr2 >= row && posc2 >= column)
    {
        draw();
        cout << "\nPosition invalid.Can not move.\n";
        getch();
        system("cls");
    }
    else
    {
        tmp = table[posr1][posc1];
        table[posr1][posc1] = 0;
        table[posr2][posc2] = tmp;
    }
}

int Board::getdata(const int posr, const int posc)
{
    if (posr >= row || posc >= column)
    {
        draw();
        cout << "\nPosition invalid.Can not get data.\n";
        getch();
        system("cls");
        return -54321;
    }
    return table[posr][posc];
}

void Board::gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void Board::draw()
{
    int i,j;
    drawtable();
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            gotoxy((j*4)+1,i*2+1);
            if (table[i][j] == 0)
            {
                cout << " ";
            }
            else if (table[i][j] > 99)
            {
                cout << table[i][j];
            }
            else
            {
                cout << " " << table[i][j];
            }

        }
    }
    cout << '\n';
    gotoxy(0,(row-1)*2+3);
}

void Board::draw(const char &code)
{
    int i,j;

    if (code == 'l')
    {
        drawtable();
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                gotoxy((j*4)+1,i*2+1);
                if (table[i][j] == 0)
                {
                    cout << " ";
                }
                else
                {
                    if (table[i][j] >= 'A' && table[i][j] <= 'Z' ||
                            table[i][j] >= 'a' && table[i][j] <= 'z')
                        cout << " " << (char)(table[i][j]);
                    else
                        cout << " " << table[i][j];
                }

            }
        }
        cout << '\n';
        gotoxy(0,(row-1)*2+3);

    }
    else
    {
        cout << "\nCode invalid.Can not draw.\n";
        getch();
        system("cls");
    }

}

void Board::draw(int posrowcursor, int poscolcursor)
{
    posrowcursor = (posrowcursor < row-1)?posrowcursor:row-1;
    poscolcursor = (poscolcursor < column-1)?poscolcursor:column-1;
    draw();
    drawcursor(posrowcursor,poscolcursor);
    gotoxy(0,(row-1)*2+3);

}

void Board::draw(const char &code, int posrowcursor, int poscolcursor)
{
    posrowcursor = (posrowcursor < row-1)?posrowcursor:row-1;
    poscolcursor = (poscolcursor < column-1)?poscolcursor:column-1;
    draw(code);
    drawcursor(posrowcursor,poscolcursor);
    gotoxy(0,(row-1)*2+3);
}

void Board::drawtable()
{
    int i,j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            gotoxy((j*4),0);
            cout << " --- ";
            gotoxy((j*4),i*2+1);
            cout << "|   |";
            gotoxy((j*4),i*2 + 2);
            cout << " --- ";
        }
    }
}

void Board::drawcursor(const int posrowcursor, const int poscolcursor)
{
    gotoxy((poscolcursor*4)+1,posrowcursor*2+1);
    cout << ">";
}
