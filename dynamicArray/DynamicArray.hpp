template <class T>
DynamicArray<T>::DynamicArray()
{
	capacite = 100;
	tabElements = new T[100]{ T() };
}

template <class T>
DynamicArray<T>::DynamicArray(int _capacite)
{
	if (_capacite < 1) throw std::invalid_argument("Le tableau ne peut pas être vide");

	capacite = _capacite;
	tabElements = new T[_capacite];

	for (int i = 0; i < capacite; i++)
	{
		tabElements[i] = T();
	}
}

template <class T>
void DynamicArray<T>::operator=(const DynamicArray<T>& _oldArray)
{
	if (this != &_oldArray){
		this->setCapacite(_oldArray.getCapacite());

		for (int i = 0; i < capacite; i++)
		{
			tabElements[i] = _oldArray.getElement(i);
		}
	}
}

template <class T>
bool DynamicArray<T>::operator==(const DynamicArray<T>& _compareArray) const
{
	bool equals = false;

	if (this->capacite == _compareArray.getCapacite())
	{
		for (int i = 0; i < capacite; i++)
		{
			if (tabElements[i] == _compareArray.getElement(i))
			{
				equals = true;
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		equals = false;
	}

	return equals;
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

template <class T>
void DynamicArray<T>::setCapacite(const int _capacite)
{
	if (_capacite < 1) throw std::invalid_argument("Le tableau ne peut pas être vide");

	T * tempTabElement = new T[_capacite];
	for (int i = 0; i < _capacite; i++)
	{
		if (i < capacite)
			tempTabElement[i] = tabElements[i];
		else
			tempTabElement[i] = T();
	}

	capacite = _capacite;

	delete tabElements;
	tabElements = tempTabElement;
}

