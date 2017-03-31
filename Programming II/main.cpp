#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "header.h"

using namespace std; 


int main() {


	/////////////////POINTERS/////////////////
	/*void checkConstness(int *ptr) {
	*ptr = 0;
	ptr++;
	}

	void checkConstness(const int *ptr) {
	*ptr = 0;
	ptr++;
	}
	void checkConstness(int* const ptr) {
	*ptr = 0;
	ptr++;
	}
	void checkConstness(const int* const ptr) {
	*ptr = 0;
	ptr++;
	}*/

	/*--------------EXERCISES CONST--------------*/
	/*--------------EXERCISE 1--------------*/

	cout << endl << "CONST EXERCISES" << endl;

	cout << "Enter a num from 0 to 100" << endl;
	unsigned short num;
	cin >> num;
	doubleNum(num);
	cout << num << endl;

	system("pause");

	/*--------------EXERCISE 2 --------------*/

	//CLASSES

	/*-------------EXERCISE 1-------------*/

	//TEMPLATES 

	/*--------------CLASS--------------*/

	cout << endl << "TEMPLATES EXERCISES" << endl;
	cout << "Suma enteros:" << suma<int>(2, 5) << endl;
	cout << "Suma floats:" << suma<float>(2.5f, 5.5f) << endl;

	system("pause");
}