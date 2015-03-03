#pragma once
using namespace std;

template <class T>
class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(int _capacite);
	bool operator==(const DynamicArray<T> & _compareArray) const;
	int getCapacite() const;
	T getElement(const int _pos) const;
	void setElement(const int _index,const T & _valeur);
	void setCapacite(const int _capacite);
private:
	//DynamicArray(const DynamicArray<T> & _oldArray);
	void operator=(const DynamicArray<T> & _oldArray);
	T * tabElements;
	int capacite;
};

#include "DynamicArray.hpp"