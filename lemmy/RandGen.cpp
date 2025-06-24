#include "RandGen.h"

RandGen::RandGen(int min = 0, int max = 100) : distribution(min, max)
{
    auto now = std::chrono::steady_clock::now().time_since_epoch();
    auto seed = static_cast<unsigned int>(std::chrono::duration_cast<std::chrono::milliseconds>(now).count());
    generator.seed(seed);
}
int RandGen::getRandom()
{
	return distribution(generator);
}
