#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "header.h"
#include "Building.h"
#include "Warehouse.h"
#include "Stack.h"
#include "Queue.h"

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
	cout << endl << "//THE STACK//" << endl;

	Stack<int> Stack(10);
	Stack.push(5);
	Stack.push(1);
	Stack.push(7);
	
	Stack.print();

	Stack.pop();
	Stack.print();


	system("pause");

	cout << endl << "//THE QUEUE//" << endl;

	system("pause");


	cout << endl << "//THE LISTS//" << endl;
	system("pause");

	cout << endl << "//THE STRINGS//" << endl;
	system("pause");

	/*-----------RECURSIVE----------*/

	cout << endl << "RECURSIVE" << endl;

	countUp(19);



}

void countUp(unsigned int val) {
	if (val != 0)
		countUp(val - 1);

	std::cout << val << "\n" << std::endl;
}

int numTrues(bool vec[], int sizeVec, unsigned int index) {
	if (index == sizeVec - 1) {
		if (vec[index])
			return 1;
		else
			return 0;
	}
	else {
		if (vec[index])
			return 1 + numTrues(vec, sizeVec, index + 1);
		else
			return 0 + numTrues(vec, sizeVec, index + 1);

	}
}

bool searchRec(int vec[], int sizeVec, unsigned int index, int val) {
	if (index >= 0 && index < sizeVec) {
		if (vec[index] == val)
			return true;
		else
			return (false || searchRec(vec, sizeVec, index + 1, val));


	}
	else {
		return false;
	}
}

int sumElemsRec(int vec[], unsigned int sizeVec, unsigned int index) {
	if (index >= 0 && index < sizeVec) {
		if (index == sizeVec - 1) {
			return vec[index];
		}
		else
			return vec[index] + sumElemsRec(vec, sizeVec, index + 1);
		}
	else
	{
		return 0;
	}
	
}