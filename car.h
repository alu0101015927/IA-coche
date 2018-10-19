

#include <iostream>
#include <vector>


    //Estructura. tiene Posición y dirección.
struct C
{
    int x_;
    int y_;
    char direc_;
    
};

class car
{
private:
    C car_;
public:

    car();
    ~car();

    void init_m(int x, int y);              //Coloca el coche en una posición que tú le indicas 
    void init_a(int max_i, int max_j);      //Coloca el coche en una posición aleatoria (De las libres)
    
    void move(int x, int y, bool w, bool a, bool s, bool d);    //Mueves el coche de manera manual  (Sin implementar)

    void autom();           //El coche se mueve de manera automática (sin implementar)

    std::ostream& write(std::ostream& os);
};