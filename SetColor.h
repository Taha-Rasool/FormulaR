#include <iostream>
#include <windows.h>

using namespace std;

void SetColor(int code){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, code);
}