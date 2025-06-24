#pragma once

enum class Symbols {LEMMY,BASS,BITCHES,WHISKY,ACE,END};

class Field
{
	
	Symbols symbol;
public:
	Field();
	void roll();
	inline Symbols getSymbol() const { return this->symbol; }

};

