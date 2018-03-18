/**
 * @File: Board
 * @Author: Josef Dostál
 * @Date: 17.03.2018
 */
#include "Board.hpp"

int Board::startPosition(int x, int y) {
	if (x < 2 && (x + y) % 2 == 1)
		return 1;
	if (x >= 6 && (x + y) % 2 == 1)
		return -1;
	return 0;
}

Board::Board() {
	for (int i = 0 ; i < 8 ; i++) {
		for (int j = 0 ; j < 8 ; j++) {
			board[i][j] = new Position(startPosition(i, j), i, j);
		}
	}
}

Board::~Board() {
	delete board[8][8];
}

void Board::printBoard() {
	cout << "   1\t2\t3\t4\t5\t6\t7\t8\n\n";
	for (int i = 0 ; i < 8 ; i++) {
		cout << i+1 << "  ";
		for (int j = 0 ; j < 8 ; j++) {
			if (j) cout << "\t";
			cout << board[i][j]->getOcc();
		}
		cout << endl << endl;
	}
}
