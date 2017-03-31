#ifndef _header_
#define _header_


void doubleNum(unsigned short &num);
void checkConstness(int *ptr);

/////////////////TEMPLATES

template <typename T>
T suma(T pParam1, T pParam2) {
	return pParam1 + pParam2;
}

template <typename T>
T division(T pParam1, T pParam2) {
	return pParam1 / pParam2;
}

#endif

