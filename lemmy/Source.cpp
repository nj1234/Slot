
#include<iostream>

#include "Field.h"

int main() {

	RandGen::init(0,static_cast<int>(Symbols::ACE));

	Field f;
	std::cout << static_cast<int>(f.getSymbol());

	f.roll();
	std::cout << static_cast<int>(f.getSymbol());
	f.roll();
	std::cout << static_cast<int>(f.getSymbol());
}