
#include <iostream>
#include <Windows.h>
using namespace std;


void SetCursor(int y, int x, int color) {

    HANDLE h = GetStdHandle(-11);
    COORD cursor;
    cursor.Y = y;
    cursor.X = x;
    SetConsoleTextAttribute(h, color);
    SetConsoleCursorPosition(h, cursor);
}

int main()
{
    SetCursor(5, 7, 12);

    cout << "cursor operation" << "\n";
}
