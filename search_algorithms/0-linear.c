#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: array
 * @size: size
 * @value: value
 * Return: the first index where value is located.
 **/

int linear_search(int *array, size_t size, int value)
{
size_t n = 0;

if (array == NULL)
	{
	return (-1);
	}
		for (; n < size; n++)
			{
			printf("Value checked array[%lu] = [%d]\n", n, array[n]);
			if (array[n] == value)
			{
				return (n);
			}
	}
return (-1);
}
