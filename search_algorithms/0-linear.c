#include "search_algos.h"


int
linear_search(int *array, size_t size, int value)
{
size_t n = 0;

if (array == NULL)
	{
	return (-1);
	}
		for (; n < size; n++)
			{
			if (array[n] == value)
			{
				return (n);
			}
	}
return (-1);
}
