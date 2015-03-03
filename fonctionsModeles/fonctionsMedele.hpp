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