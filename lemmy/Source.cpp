
#include<iostream>

#include "RandGen.h"

int main() {

	RandGen r(0,5);

	std::cout << r.getRandom();
}