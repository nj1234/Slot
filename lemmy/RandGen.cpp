#include "RandGen.h"

std::mt19937 RandGen::generator;
std::uniform_int_distribution<int> RandGen::distribution;


void RandGen::init(int min = 0, int max = 100)
{
    auto now = std::chrono::steady_clock::now().time_since_epoch();
    auto seed = static_cast<unsigned int>(std::chrono::duration_cast<std::chrono::milliseconds>(now).count());
    generator.seed(seed);
    distribution = std::uniform_int_distribution<int>(min, max);

}
int RandGen::getRandom()
{
	return distribution(generator);
}
