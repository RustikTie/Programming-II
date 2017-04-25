#include <cstdio>
#include <iostream>
using namespace std; 

class Pokemon
{
public:
	Pokemon(char pname) {
		
	}

	virtual float DamageAttack(Pokemon* pk);
	~Pokemon(){}
protected:
	char name[30];
	char type[30];
};

