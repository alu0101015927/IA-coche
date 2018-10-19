#include "car.h"
#include "terrain.h"

#include <iostream>


    // Coordina todo, e indica que tienen que hacer terrain y car
class mediator
{
private:
    car C;
    terrain T;

public:
    mediator();
    
    ~mediator();
    
    void run();         // Itera hasta que acabe.
    
    std::ostream& write(std::ostream& os);
    
    
    
    
};