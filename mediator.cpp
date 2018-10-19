#include "mediator.h"


#include <iostream>



mediator::mediator()
{
    char opt;
    
    std::cout << "Deseas introducir el tamaño del mapa y la probabilidad de obstáculos? (S/N) (por defecto: 50x50, 25%) \n";
    std::cin >> opt;

    int i;
    int j;
    int p;

    if(opt == 's' | opt == 'S'){
        std::cout << "Introduce tamaño del mapa (mxn) \n";
        std::cin >> i;
        std::cin >> j;
        
        std::cout << "Cuál es la probabilidad de obstáculos que deseas? \n";
        
        do{
        std::cout << "Introduce un número del 0-9 (siendo 9 la mayor probabilidad permitida): ";
        std::cin >> p;
        }while((p < 1) | (p > 9));
        
        T.create(i,j, p);
    }
    else{
        i = 50;
        j = 50;
        p = 5;
        T.create(i,j, p);
    }
    
    
    
    std::cout << "Se procederá a colocar el coche. \n Prefiere colocarlo de manera aleatoria? (S/N): ";
    std::cin >> opt;
    
    if((opt == 's') | (opt == 'S')){
        
        bool valid = false;
        
        do{
            C.init_a(i, j);
            
            std::pair<int,int> aux = C.get_pos();
            int pos_x = aux.first;
            int pos_y = aux.second;
            
            char cont = T.get_pos(pos_x, pos_y);
            
            if(cont == ' ')
                valid = true;
            
            

        }while(valid == false);
        
    }
    else{

        std::cout << "Elije la posición de inicio del coche (si hay un obstáculo, tendrás que repetir la operación \n";
        
        bool valid = false;
        
        do{
        
            std::cout << "Introduzca posición x: ";
            std::cin >> i;
            std::cout << "Introduzca posición y: ";
            std::cin >>j;
        
            if(T.get_pos(i,j) != 'o'){        
                C.init_m(i, j);
                valid = true;
            }
            
        }while(valid == false);
    }
    
}




mediator::~mediator()
{
    T.~terrain();
    C.~car();
    
}




void mediator::run()
{
    
    
    
}




std::ostream& mediator::write(std::ostream& os)
{
    
    return os;
}