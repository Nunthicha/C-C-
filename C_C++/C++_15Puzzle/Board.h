#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <windows.h>
#include <conio.h>


class Board
{
public:
    Board(const int, const int);
    void writedata(const int, const int, int*, const int, const int);
    void writedata(const int, const int, const int);
    void _swap(const int, const int, const int, const int);
    void _move(const int, const int, const int, const int);
    int getdata(const int, const int);
    void draw();
    void draw(const char &);
    void draw(int, int);
    void draw(const char &, int, int);

private:
    int row,column;
    int **table;
    void gotoxy(int, int);
    void drawtable();
    void drawcursor(const int, const int);
};

#endif // BOARD_H
