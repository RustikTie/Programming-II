#include <cstdio>
#include <iostream>

#pragma once
class Building
{
public:
	Building(const char *pname){
		sprintf(name, pname);

	}
	const char *getName() const {
		return name;
	}

	~Building() {}

protected: 
	char name[64];
};

