#pragma once
template <class T>

class List
{
public:
	List() {
		first = nullptr;
		last = nullptr;
		numElems = 0;
	}
	~List() {
		clear();
	}

	void pushFront(const T& elem) {
		nude *aux = new nude;
		aux->value = elem;
		aux->next = first;
		aux->prev = nullptr;
		first = aux;

		if (numElems == 0) { last = aux; }

		numElems++;
	}

	void pushBack(const T& elem) {
		nude *aux = new nude;
		aux->value = elem;
		aux->next = nullptr;
		aux->prev = last;
		
		if (last != nullptr)
		{
			last->next = aux;
		}

		last = aux;
		if (numElems == 0) { first = aux; }
		numElems++; 
		
	}

	void popFront() {
		front 
	}
	void popBack() {}
	void insert(unsigned int pos, const T& elem) {}
	void remove(unsigned int pos) {}

	T front() const {}
	T back() const {}

	T getValue(unsigned int pos) const{}

	bool empty() const {}
	unsigned int size() const {}
	void clear() {}
	void print() const {}

private:

	struct nude {
		T value;
		nude *next;
		nude *prev;
	};

	nude *first;
	nude *last;
	unsigned int numElems;
};



