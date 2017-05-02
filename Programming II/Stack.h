#pragma once
template<class Type>
class Stack {
public:
	Stack(int maxElems){
		idTopElem = -1;
		stackElems = (Type*)malloc(sizeof(Type)*maxElems);
	}
	~Stack(){}

	void push(const Type& item) {
		idTopElem++;
		stackElems[idTopElem] = item;	
	}

	void pop(){
		idTopElem--;
	}
	Type top() const{
		return stackElems[idTopElem];
	}

	bool empty() const {
		if (idTopElem > -1) {
			return false;
		}
		return true;
	}
	int size() const {
		return maxElems;
	}
	void print() const {
		for (int i = 0; i < idTopElem + 1; ++i) {
			cout << stackElems[i] << endl;
		}
	}
	
private:
	Type* stackElems;
	int maxElems;
	int idTopElem;
};