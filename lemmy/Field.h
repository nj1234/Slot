#pragma once

enum class Symbols {LEMMY,BASS,BITCHES,WHISKY,ACE,END};

class Fields
{
	
	Symbols symbol;
public:
	Fields();
	void roll();
	inline Symbols getSymbol() const { return this->symbol; }

};

