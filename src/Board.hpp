#ifndef BOARD_HPP
	#define BOARD_HPP

#include "Position.hpp"
#include <iostream>

using namespace std;

class Board {
private:
	Position *board[8][8];
	int startPosition(int x, int y);
public:
	Board();
	~Board();
	void printBoard();
};

#endif
