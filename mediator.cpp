#include "mediator.h"


#include <iostream>



mediator::mediator()
{
    int i;
    int j;
    std::cout << "Introduce tamaño del mapa (mxn) \n";
    std::cin >> i;
    std::cin >> j;
    
    T.create(i,j);
    
    
}

mediator::~mediator()
{
    
    
    
}

void mediator::run()
{
    
    
    
}


std::ostream& mediator::write(std::ostream& os)
{
    
    
}