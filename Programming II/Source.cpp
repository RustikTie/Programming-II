#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void doubleNum(unsigned short &num) { //the & changes the variable outside as well, if it wasn't there the variable wouldn't change

	num = num*2;

}

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

	cout << "Enter a num from 0 to 100" << endl;
	unsigned short num;
	cin >> num;
	doubleNum(num);
	cout << num << endl;


	/*--------------EXERCISE 2 --------------*/



	getchar(); getchar();
	return 0;

}

