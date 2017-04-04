#include <cstdio>
#include <iostream>
using namespace std;

class Warehouse : public Building
{
public:
	Warehouse(const char *pname, int procks, int pwheat, int pwood) : Building(pname) {
		rocks = procks;
		wheat = pwheat;
		wood = pwood;
	}

	void printfResources() const {
		cout << "\nResources of warehouse: " << name << endl << "Wood: " << wood << endl << "Rocks: " << rocks << endl << "Wheat: " << wheat << endl;
	}


	~Warehouse(){}
private:
	int wheat;
	int wood;
	int rocks;
};



