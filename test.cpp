
#include <iostream>
#include <vector>

#include "test_header.h"
/*
char test()
{
    char a;
    std::cin >> a;
    return a;

}
*/
int main()
{
 
    std::cout << "Di S o N" << '\n';
    
    char b;
    std::cin >> b;
    
    if(b == 's')
        std::cout << "AAAAAAAAAAAAAAAAAAAAAA" << '\n';
    
    int i;
    int j;
    
    std::cin >> i;
    std::cin >> j;
    
    terrain A(i,j);
    
    std::cout << "Desea imprimir la matriz? (S/N) \n";
    std::cin >> b;
    
    if((b == 's') | (b == 'S'))
        A.w();
    
}

