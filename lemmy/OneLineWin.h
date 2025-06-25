#pragma once
#include "WinStrategy.h"
class OneLineWin : public WinStrategy
{
public:
	bool checkIfWin(const std::vector<Field*>&) override;
};

