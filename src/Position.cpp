#include "Position.hpp"

Position::Position(int occ, int x, int y) {
	this->x = x;
	this->y = y;
	this->occ = occ;
	if ((x + y) % 2 == 0)
		this->available = false;
	else
		this->available = true;
}

bool Position::isAvailable() {
	return this->available;
}

int Position::getOcc() {
	return this->occ;
}

void Position::setOcc(int occ) {
	this->occ = occ;
}

int Position::getX() {
	return this->x;
}

int Position::getY() {
	return this->y;
}
