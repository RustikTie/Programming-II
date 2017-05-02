#pragma once
template <class Type>
class Queue
{
public:
	Queue(int maxElems)
	{
		this->maxElems = maxElems;
		idEndElem = -1;
		queueElems = new Type[this->maxElems];
	}

	void unqueue(const Type& elem) {
	}
	Type dequeue() {}

	bool empty() const{}
	int size() const {}

	void print() const{}
	~Queue(){}
private:
	Type* queueElems;
	int maxElems;
	int idEndElem;
};

