#include "car.h"


#include <iostream>
#include <random>
#include <chrono>




car::car()
{
    
}




car::~car()
{
    
    
}




void car::init_m(int x, int y)
{
    car_.x_ = x;
    car_.x_ = y;
    car_.direc_ = 'w';
}




void car::init_a(int max_i, int max_j)
{
    std::mt19937_64 rng;
        // initialize the random number generator with time-dependent seed
    uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    std::seed_seq ss{uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed>>32)};
    rng.seed(ss);
    
    
    std::default_random_engine generator;
    int dice_roll;
    

    std::uniform_int_distribution<int> unif_i(0,max_i);
    dice_roll = unif_i(rng);  // generates number in the range 0..1 
    
    car_.x_ = dice_roll;

    std::uniform_int_distribution<int> unif_j(0,max_j);
    dice_roll = unif_j(rng);  // generates number in the range 0..1 

    car_.y_ = dice_roll;

}



std::pair<int,int> car::get_pos()
{
    std::pair<int,int> aux;
    aux.first = car_.x_;
    aux.second = car_.y_;
    
    return aux;
}

void car::move(int x, int y, bool w, bool a, bool s, bool d)
{
    
    
    
}




void car::autom()
{
    
    
}




std::ostream& car::write(std::ostream& os)
{
    
    return os;   
}