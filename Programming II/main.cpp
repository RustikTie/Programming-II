#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "header.h"
#include "Building.h"
#include "Warehouse.h"
#include "House.h"
#include "Temple.h"
#include "Pokemon.h"
#include "Piece.h"

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

	/*--------------INHERITANCE--------------*/

	cout << endl << "INHERITANCE EXERCISES" << endl;
	Warehouse w("Wayne Enterprises", 4, 7, 10);
	House h("Wayne Manor", 30, 1, 1);
	Temple t("Something", "Poseidon", 3);

	w.printfResources();
	h.printHouse();
	t.printTemple();

	system("pause");

	/*--------------POLYMORPHISM--------------*/
	cout << endl << "POLYMORPHISM EXERCISES" << endl;
	system("pause");

	/*--------------POLYMORPHISM 2--------------*/
	cout << endl << "POLYMORPHISM EXERCISES: CHESS" << endl;
	system("pause");




}