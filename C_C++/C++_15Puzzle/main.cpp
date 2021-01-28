#include "Board.h"
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
bool checkwin (Board &,int );
int main()
{
    int mode,m_row,m_column,ran;
    do
    {
    cout << "Select Mode:" << endl
    << "1.Easy    |4x4| 15 Puzzle"<< endl
    << "2.Normal  |5x5| 24 Puzzle"<< endl
    << "3.Hard    |6x6| 35 Puzzle"<< endl
    << "4.No hope |10x10| 99 Puzzle" << endl;
    cin >> mode;
    system("cls");

        switch(mode)
        {
            case 1:m_row = 4; m_column = 4; ran = 500;break;
            case 2:m_row = 5; m_column = 5; ran = 750;break;
            case 3:m_row = 6; m_column = 6; ran = 1000;break;
            case 4:m_row = 10; m_column = 10; ran = 5000;break;
        }
    }while(mode>4);


    int i,j,k,x,y,u,zerox = 3,zeroy = 3,tmpx,tmpy;
    zeroy = m_row-1;
    zerox = m_column-1;
    int data[m_row*m_column];
    for( i = 0 , k = 0 ; i < m_row*m_column; i++)
    {
        data[i] = ++k;
    }data[(m_row*m_column)-1] = 0;

    Board m (m_row,m_column);
    m.writedata(0,0,data,m_row,m_column);
    srand( time(NULL) );

    for (i = 0; i < ran; i++)
    {
        u = rand()%4;
        switch(u)
        {
        case 0:
            if (zeroy != m_row-1)
            {
                tmpy = zeroy+1;
                m._swap(zeroy,zerox,tmpy,zerox);
                zeroy+=1;
            }break;
        case 1:
            if (zeroy != 0)
            {
                tmpy = zeroy-1;
                m._swap(zeroy,zerox,tmpy,zerox);
                zeroy-=1;
            }break;
        case 2:
            if (zerox != m_column-1)
            {
                tmpx = zerox+1;
                m._swap(zeroy,zerox,zeroy,tmpx);
                zerox+=1;
            }break;
        case 3:
            if (zerox != 0)
            {
                tmpx = zerox-1;
                m._swap(zeroy,zerox,zeroy,tmpx);
                zerox-=1;
            }break;
        }

    }

    while(1)
    {
        m.draw();
        cout << "\nPress the arrow keys to play ;press Enter to Exit";
        u = getch();
        switch(u)
        {
        case 72:
            if (zeroy != m_row-1)
            {
                tmpy = zeroy+1;
                m._swap(zeroy,zerox,tmpy,zerox);
                zeroy+=1;
            }
            break;
        case 80:
            if (zeroy != 0)
            {
                tmpy = zeroy-1;
                m._swap(zeroy,zerox,tmpy,zerox);
                zeroy-=1;
            }
            break;
        case 75:
            if (zerox != m_column-1)
            {
                tmpx = zerox+1;
                m._swap(zeroy,zerox,zeroy,tmpx);
                zerox+=1;
            }
            break;
        case 77:
            if (zerox != 0)
            {
                tmpx = zerox-1;
                m._swap(zeroy,zerox,zeroy,tmpx);
                zerox-=1;
            }
            break;
        case 13:
            return 0;
        }
        if (checkwin(m,m_column))
        {
            m.draw();
            cout << "You win!!";
            break;
        }
    }
    return 0;
}
bool checkwin (Board &m,int c)
{
    int i,j,tmp;

    tmp = 0;
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (m.getdata(i,j) == tmp + 1 || tmp == (c*c)-1)
            {
                tmp = m.getdata(i,j);
            }
            else
                return false;
        }
    }
    return true;
}

