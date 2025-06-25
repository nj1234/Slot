#pragma once
#include <vector>
#include "Field.h"
class WinStrategy
{
public:
	virtual bool checkIfWin(const std::vector<Field*>&) = 0;
};

