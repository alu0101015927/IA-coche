

#include <iostream>



class mediator
{
private:
    car C;
    terrain T;

public:
    mediator();
    
    ~mediator();
    
    void run();
    
    std::ostream& write(std::ostream& os);
    
    
    
    
};