#include "Board.h"

Board::Board()
{
	for (size_t i = 0; i < NUMBER_OF_FIELDS; i++) {
		auto temp = new Field;
		temp->roll();
		this->fields.push_back(temp);
	}
}

Board::~Board()
{
	for (int i = static_cast<int>(this->fields.size()) - 1; i >= 0; i--) {
		delete this->fields[i];
	}
	this->fields.clear();
}

void Board::printBoard() const
{
	for (size_t i = 0; i < this->fields.size(); i++) {

		if (i != 0 && i % 3 == 0)
			std::cout << std::endl;
		std::cout << *(this->fields[i])<<" ";
	}
}
