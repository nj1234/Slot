#pragma once
#include "RandGen.h"
#include "ostream"
enum class Symbols {LEMMY,BASS,BITCHES,WHISKY,ACE};

class Field
{
	Symbols symbol;
public:
	Field();
	void roll();
	inline Symbols getSymbol() const { return this->symbol; }
	
	friend std::ostream& operator<<(std::ostream& out, const Field& field);
};

