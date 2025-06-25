#include<iostream>
#include<crtdbg.h>
#include"Bets.h"
#include "Board.h"
/*

	TO DO: 
		game logic 


*/
int main() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	RandGen::init(0,static_cast<int>(Symbols::ACE));
   
	Bets b;

	b.increaseBet();
	b.increaseBet();
	b.decreaseBet();
	
	std::cout << b.getBetValue();
	


	_CrtDumpMemoryLeaks();
}