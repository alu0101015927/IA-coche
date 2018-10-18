
#include <iostream>
#include <vector>


struct C
{
    std::pair<int, int> pos_;
    int direc_;
    
};

class car
{
private:
    C car_;
public:

    car();
    ~car();

    void move(std::pair<int,int> pos);

    void autom();

    std::ostream& write(std::ostream& os);
};