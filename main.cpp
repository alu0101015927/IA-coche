#include <curses.h>
#include <locale.h>
#include "menu.h"
#include <string.h>
#include <iostream>

using namespace std;

int main (){

    Menu A;
    vector<int>  v = A.generate();
    
             initscr();

             move(2,5);
             printw("Opciones: %d", v[0]);

             getch();
             endwin();

    return 0;
}
