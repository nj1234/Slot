#pragma once
#include "RandGen.h"
enum class Symbols {LEMMY,BASS,BITCHES,WHISKY,ACE};

class Field
{
	Symbols symbol;
public:
	Field();
	void roll();
	inline Symbols getSymbol() const { return this->symbol; }

};

