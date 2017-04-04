#include <cstdio>
#include <iostream>
#pragma once
using namespace std;

class House : public Building
{
public:
	House(const char *pname, int pfloors, int pinhabitants, int pservants) : Building(pname) {
		floors = pfloors;
		inhabitants = pinhabitants;
		servants = pservants;
	}

	void printHouse() const {
		cout << "\nResources of house: " << name << endl << "Floors: " << floors << endl << "Inhabitants: " << inhabitants << endl << "Servants: " << servants << endl;
	}

	~House() {}

private:
	int floors, inhabitants, servants;
};

