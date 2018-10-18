
#include <iostream>
#include <random>
#include <chrono>


#include "test_header.h"

#define RAND_CHOCU 1

terrain::terrain(int m, int n)
{
    //char M[m][n];
    m_ = m;
    n_ = n;
    
    M_.resize(m_, std::vector<char>(n_));
    
    std::cout << "Desea que la generación de obstáculos sea aleatoria? (S/N)" << '\n';
    
    char a;
    char b;
    std::cin >> b;
    
    
    if(b == 'S'){
    
        for(int i = 0; i < m_; i++){
            for(int j = 0; j < n_; j++){ 


                std::mt19937_64 rng;
                    // initialize the random number generator with time-dependent seed
                uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
                std::seed_seq ss{uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed>>32)};
                rng.seed(ss);


                std::default_random_engine generator;
                std::uniform_int_distribution<int> unif(0,1);
                int dice_roll = unif(rng);  // generates number in the range 0..1 
                
                
                a = dice_roll + 97;
                
                //std::cout << dice_roll << ' ' << a << '\n';
                
                M_[i][j] = a;
                
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

    
terrain::~terrain()
{
    
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
    
    
    if(a == 'b')
        std::cout << 'O' << ' ';
    
    else     
        std::cout << ' ' << ' ';
        
    if(j >= (n_ - 1))
        std::cout << '|' << '\n';
    
}



std::ostream& terrain::write_all(std::ostream&)
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

    
}









