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
T DynamicArray<T>::getElement(const int _pos) const
{
	return tabElements[_pos];
}

template <class T>
void DynamicArray<T>::setElement(const int _index, const T& _valeur)
{
	tabElements[_index] = _valeur;
}

