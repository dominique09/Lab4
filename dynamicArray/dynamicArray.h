#pragma once
using namespace std;

template <class T>
class DynamicArray
{
public:
	DynamicArray();
	int getCapacite() const;
	T getElement(const int _pos) const;
	void setElement(const int _index,const T & _valeur);
private:
	T * tabElements;
	int capacite;
};

#include "DynamicArray.hpp"