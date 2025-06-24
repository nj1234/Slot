#pragma once
#include <random>
#include <chrono>

class RandGen
{
private:
    static std::mt19937 generator;
    static std::uniform_int_distribution<int> distribution;

public:
   
    static void init(int, int);
    static int getRandom();
    
};
