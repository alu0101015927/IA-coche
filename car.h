
#include <iostream>
#include <vector>


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

    void init(int x, int y);
    void move(int x, int y, bool w, bool a, bool s, bool d);

    void autom();

    std::ostream& write(std::ostream& os);
};