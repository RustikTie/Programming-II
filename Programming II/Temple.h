#include <cstdio>
#include <iostream>
using namespace std;
#pragma once

class Temple : public Building
{
public:
	Temple(const char *pname, char* pgod, int ppriests) : Building(pname) {
		int i = 0;
		for (i = 0; i < sizeof(pgod); ++i)
		{
			god[i] = pgod[i];
		}
		god[i + 0] = '\0';

		priests = ppriests;
	}

	void printTemple()const {
		cout << "\nResources of temple: " << name << endl << "God: " << god << endl << "Priests: " << priests << endl;

	}


	~Temple() {}
private:
	char god[20];
	int priests;

};