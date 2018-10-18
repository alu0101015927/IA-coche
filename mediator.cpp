#include "mediator.h"


#include <iostream>



mediator::mediator()
{
    char opt;
    
    std::cout << "Deseas introducir el tamaño del mapa? (S/N) (por defecto: 50x50) \n";
    std::cin >> opt;


    if(opt == ('s' | 'N')){
        int i;
        int j;
        std::cout << "Introduce tamaño del mapa (mxn) \n";
        std::cin >> i;
        std::cin >> j;
    
        T.create(i,j);
    }
    else{
        T.create(50,50);
    }
    
    
    
    
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