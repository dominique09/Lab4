#pragma once
using namespace std;

template <class T>
class DynamicArray
{
public:
	DynamicArray();
	int getCapacite() const;
	T getElement(int _pos) const;
private:
	T * tabElements;
	int capacite;
};

#include "DynamicArray.hpp"