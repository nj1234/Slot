#include "Field.h"
Field::Field(): symbol(Symbols::LEMMY)
{
	
}
void Field::roll() {
	
	this->symbol = static_cast<Symbols>(RandGen::getRandom());
}