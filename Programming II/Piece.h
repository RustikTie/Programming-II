#include <cstdio>
#include <iostream>
using namespace std;

class Piece
{
public:
	Piece(bool pColor, int pRow, char pCol) {
		isWhite = pColor;
		row = pRow;
		col = pCol;
	}
	 
	void setPostion(int pRow, char pCol, bool pColor) {
		row = pRow;
		col = pCol;
	}
	int getPositionRow()const {
		return row;
	}
	char getPositionCol()const {
		return col;
	}
	bool getisWhite()const { //they are const as they do not change any value
		return isWhite;
	}

	virtual bool checkMovement(int prow, char pcol) = 0; //it will only be able to be used by child classes

	~Piece() {}
private:

protected: 
	int row;
	char col;
	bool isWhite;

};

class Pawn : public Piece
{
public:
	Pawn(int pRow, char pCol, bool pColor) : Piece (row, col, isWhite) {}

	bool checkMovement(int prow, char pcol){
		bool ret = false;

		if (isWhite && prow == row+1) {
			ret = true;
		}
		else if (isWhite == false && prow == row-1) {
			ret = true;
		}

		return ret;
	}

	~Pawn() {}

};

class Bishop : public Piece
{
public:
	Bishop(int pRow, char pCol, bool pColor) : Piece(row, col, isWhite) {}

	bool checkMovement(int prow, char pcol) {
		bool ret = false;

		if (isWhite && prow == row + 1 && pcol == col) {
			ret = true;
		}
		else if (isWhite == false && prow == row - 1 && pcol == col) {
			ret = true;
		}

		return ret;
	}

	~Bishop() {}

};