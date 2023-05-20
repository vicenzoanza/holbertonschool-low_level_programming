#include "search_algos.h"
/**
 * binary_search -  searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: array
 * @size: size
 * @value: value
 * Return: the index where value is located
 **/
int binary_search(int *array, size_t size, int value)
{
int left = 0, right = size - 1, main, n;

while (left <= right)
	{
	printf("Searching in array: ");
	for (n = left; n <= right; n++)
	{
		printf("%d", array[n]);
		if (n != right)
			printf(", ");
	}
	printf("\n");
	main = (left + right) / 2;
	if (array[main] == value)
		return (main);
	else if (array[main] < value)
		left = main + 1;
	else
		right = main - 1;
	}
return (-1);
}
