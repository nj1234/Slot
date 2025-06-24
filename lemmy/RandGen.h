#pragma once
#include <random>
#include <chrono>

class RandGen
{
private:
    std::mt19937 generator;
    std::uniform_int_distribution<int> distribution;

public:
    RandGen(int min , int max );

    int getRandom();
    
};
