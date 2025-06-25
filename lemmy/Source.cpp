#include<iostream>
#include<crtdbg.h>
#include"Bets.h"
#include "Board.h"
#include"OneLineWin.h"
/*

	TO DO: 
		game logic 


*/
int main() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	RandGen::init(0,static_cast<int>(Symbols::ACE));
   
	Board b;

	WinStrategy* test = new OneLineWin;
	
	b.printBoard();

	if (test->checkIfWin(b.getFieds()))
		std::cout << "win";
	else
		std::cout << "hhhh";


	delete test;

	_CrtDumpMemoryLeaks();
}