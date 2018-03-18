#ifndef POSITION_HPP
	#define POSITION_HPP

class Position {
private:
	bool available;
	int occ; ///< OCCupied
	int x;
	int y;
public:
	Position(int occ, int x, int y);
	~Position() {  };
	bool isAvailable();
	int getOcc();
	int getX();
	int getY();
	void setOcc(int occ);
};

#endif
