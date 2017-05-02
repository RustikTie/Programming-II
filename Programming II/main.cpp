#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "header.h"
#include "Building.h"
#include "Warehouse.h"
#include "Stack.h"


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

	/*--------------FRIENDS--------------*/

	cout << endl << "FRIENDS EXERCISES" << endl;

	Warehouse w("Wayne Enterprises", 4, 7, 10);

	w.printfResources();

	system("pause");

	/*-----------DATA STRUCTURES----------*/

	cout << endl << "DATA STRUCTURE EXERCISES" << endl;

	Stack<int> Stack(10);
	Stack.push(5);
	Stack.push(1);
	Stack.push(7);
	
	Stack.print();

	Stack.pop();
	Stack.print();


	system("pause");
}
