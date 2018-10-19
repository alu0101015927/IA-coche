#include "mediator.h"


#include <iostream>



mediator::mediator()
{
    char opt;
    
    std::cout << "Deseas introducir el tamaño del mapa? (S/N) (por defecto: 50x50) \n";
    std::cin >> opt;

    int i;
    int j;

    if(opt == ('s' | 'N')){
        std::cout << "Introduce tamaño del mapa (mxn) \n";
        std::cin >> i;
        std::cin >> j;
    
        T.create(i,j);
    }
    else{
        i = 50;
        j = 50;
        T.create(i,j);
    }
    
    std::cout << "Se procederá a colocar el coche. \n Prefiere colocarlo de manera aleatoria? (S/N)";
    std::cin >> opt;
    
    if(opt == ('s' | 'S')){
        C.init_a(i, j);
    }
    else{

        std::cout << "Elije la posición de inicio del coche (si hay un obstáculo, tendrás que repetir la operación \n";
        
        bool valid = false;
        
        do{
        
            std::cout << "Introduzca posición x: ";
            std::cin >> i;
            std::cout << "Introduzca posición y: ";
            std::cin >>j;
        
            if(T.get_pos(i,j) != 'b'){        
                C.init_m(i, j);
                valid = true;
            }
            
        }while(valid == false);
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