#pragma once
using namespace std;

template <class T>
class DynamicArray
{
public:
	DynamicArray();
	int getCapacite() const;
private:
	int capacite;
};

#include "DynamicArray.hpp"