#include "main.h"
/**
* print_square - print a square, followed by a new line.
* @size: size of square
**/
void print_square(int size)
{
	int i, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
