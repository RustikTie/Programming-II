#include <cstdio>
#include <iostream>
#include "Building.h"
using namespace std;

class House : public Building
{
	House(const char *pname, int procks, int pwheat, int pwood) : Building(pname) {
	}

	~House() {}
};