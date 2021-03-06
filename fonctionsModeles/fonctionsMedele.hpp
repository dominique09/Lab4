template <typename T>
T TrouverMax(T tab[], int _nbElement)
{
	T max = T();

	for (int i = 0; i < _nbElement; i++)
	{
		if (tab[i] > max)
			max = tab[i];
	}

	return max;
}

template <typename T>
T CalculerSomme(T tab[], int _nbElement)
{
	T somme = T();

	for (int i = 0; i < _nbElement; i++)
	{
		somme += tab[i];
	}

	return somme;
}

template <typename T>
unsigned int CompterElement(T element, T tab[], int nbElement)
{
	int nb = 0;
	for (int i = 0; i < nbElement; i++)
	{
		if (tab[i] == element)
			nb++;
	}

	return nb;
}