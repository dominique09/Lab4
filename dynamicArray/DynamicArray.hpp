template <class T>
DynamicArray<T>::DynamicArray()
{
	capacite = 100;
}

template <class T>
int DynamicArray<T>::getCapacite() const
{
	return capacite;
}
