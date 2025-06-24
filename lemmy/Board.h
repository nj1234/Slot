#pragma once
#include"iostream"
#include <vector>
#include "Field.h"
class Board
{
	static constexpr size_t NUMBER_OF_FIELDS = 9;
	std::vector<Field*> fields;
public:
	Board();
	~Board();
	void printBoard() const;
};

