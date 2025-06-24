#include "Field.h"
Field::Field(): symbol(Symbols::LEMMY)
{
	
}
void Field::roll() {
	
	this->symbol = static_cast<Symbols>(RandGen::getRandom());
}

std::ostream& operator<<(std::ostream& out, const Field& field)
{
	switch (field.getSymbol())
	{
	case Symbols::LEMMY:
		out << "Lemmy";
		break;
	case Symbols::BASS:
		out << "Bass";
		break;
	case Symbols::BITCHES:
		out << "Bitches";
		break;
	case Symbols::WHISKY:
		out << "Whisky";
		break;
	case Symbols::ACE:
		out << "Ace";
		break;
	default:
		break;
	}
	return out;
}
