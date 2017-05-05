#pragma once
class myString
{
public:
	myString();
	myString();
	myString();
	myString();

	bool operator== (const myString& string) const;
	bool operator== (const char* string) const;
	bool operator!= (const myString& string) const;
	bool operator!= (const char* string) const;
	const myString& operator= (const myString& string);
	const myString& operator= (const char* string);
	const myString& operator+= (const myString& string);
	const myString& operator+= (const char* string);

	unsigned int length() const;
	unsigned int size() const;
	bool empty() const;
	void reset();
	const char* c_str() const;
	unsigned int capacity() const;
	void print() const;

	~myString();
private:
	void memAlloc(unsigned int requiredMemory);
	void clear(char* st);

	char* str;
	unsigned int maxCapacity;
};

myString::myString() {
}
myString::myString() {}
myString::myString() {}
myString::myString() {}

bool myString::operator== (const myString& string) const {}
bool myString::operator== (const char* string) const {}
bool myString::operator!= (const myString& string) const {}
bool myString::operator!= (const char* string) const {}
const myString& myString::operator= (const myString& string) {}
const myString& myString::operator= (const char* string) {}
const myString& myString::operator+= (const myString& string) {}
const myString& myString::operator+= (const char* string) {}

unsigned int myString::length() const {}
unsigned int myString::size() const {}
bool myString::empty() const {}
void myString::reset() {}
const char* myString::c_str() const {}
unsigned int myString::capacity() const {}
void myString::print() const {}

myString::~myString(){}

void myString::memAlloc(unsigned int requiredMemory) {
	maxCapacity = requiredMemory;
	str = new char[maxCapacity];

}