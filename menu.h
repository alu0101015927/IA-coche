#include <curses.h>
#include <locale.h>
#include <string.h>
#include <vector>

using namespace std;

class Menu {

  private:
    vector<int> opciones;

  public:

    Menu();
    ~Menu();

    int n_chars (char *str);
    void str_cp (char *dest, char *src);

    vector<int> generate();
    int print_menu (int sty, int x, int alts, int width, char title[], char entries[][100], int start);



};
