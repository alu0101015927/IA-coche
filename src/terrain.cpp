#include "terrain.h"


#include <iostream>
#include <random>
#include <chrono>




terrain::terrain()
{
    
    
}




terrain::~terrain()
{
    
}




void terrain::create(int m, int n, int p)
{
    
    m_ = m;
    n_ = n;
    
    M_.resize(m_, std::vector<char>(n_));
    
    std::cout << "Desea que la generación de obstáculos sea aleatoria? (S/N)" << '\n';
    
    char a;
    char b;
    std::cin >> b;
    
    int q;
    
    if(b == 'S'){
        

        for(int i = 0; i < m_; i++){
            for(int j = 0; j < n_; j++){ 


                std::mt19937_64 rng;
                    // initialize the random number generator with time-dependent seed
                uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
                std::seed_seq ss{uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed>>32)};
                rng.seed(ss);
                
                q = 10 - p;

                std::default_random_engine generator;
                std::uniform_int_distribution<int> unif(0,q);
                int dice_roll = unif(rng);  // generates number in the range 0..1 
                
                
                
                if(dice_roll == 0){
                    M_[i][j] = 'o';
                }
                else{
                    M_[i][j] = ' ';
                }

                write_char(std::cout, M_[i][j], i, j);
                
            }
        }
    }
    
    if( b == 'N'){
        
    std::cout << "Coloca los obstáculos posición por posición. Se mostrará el avance cada vez que termines una fila (a = vacío / b = obstáculo) \n";    
        
       for(int i = 0; i < m_; i++){
            for(int j = 0; j < n_; j++){ 
                
                std::cout << "Posición" << '[' << i << ',' << j << ']' << ':' << ' ';
                std::cin >> a;
                M_[i][j] = a;

            }
            for(int j = 0; j < n_; j++)
                write_char(std::cout, M_[i][j], i, j);
        }
        
            
        std::cout << "\n \n Se procederá a escribir la rejilla completa \n";
        
        for(int i = 0; i < m_; i++)
            for(int j = 0; j < n_; j++)
                write_char(std::cout, M_[i][j], i, j);
    }

}




char terrain::get_pos(int i, int j)
{
    return M_[i][j];
}




void terrain::set_pos(int i, int j, char a)
{
    M_[i][j] = 'o';
}




void terrain::w()
{
    write_all(std::cout);
}




std::ostream& terrain::write_char(std::ostream& os, char a, int i, int j)
{

    //assert((i <= m_) && (j <= n_));
    
    if(j == 0)
        std::cout << '|';
    
    
    std::cout << M_[i][j] << ' ';
    
    if(j >= (n_ - 1))
        std::cout << '|' << '\n';
    
    return os;
}




std::ostream& terrain::write_all(std::ostream& os)
{

    for(int i = 0; i < m_; i++)
        std::cout << '_';
    
    std::cout << '\n';
    
    for(int i = 0; i < m_; i++){
        for(int j = 0; j < n_; j++){
            
            if(j == 0)
                std::cout << '|';
    
    
            if(M_[i][j] == 'b')
                std::cout << 'O' << ' ';
    
            else     
                std::cout << ' ' << ' ';
        
            if(j >= (n_ - 1))
                std::cout << '|' << '\n';
        }
    }
    
    for(int i = 0; i < m_; i++)
        std::cout << '_';
    
    std::cout << '\n';

    return os;
    
}









