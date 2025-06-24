#include "Fields.h"
Fields::Fields()
{
	srand(time(0));
}
void Fields::roll() {
	this->symbol = static_cast<Symbols>(rand()%static_cast<int>(Symbols::END)) ;
}