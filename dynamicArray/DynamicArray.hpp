template <class T>
DynamicArray<T>::DynamicArray()
{
	capacite = 100;
	tabElements = new T[100]{ T() };
}

template <class T>
int DynamicArray<T>::getCapacite() const
{
	return capacite;
}

template <class T>
T DynamicArray<T>::getElement(int _pos) const
{
	return tabElements[_pos];
}
