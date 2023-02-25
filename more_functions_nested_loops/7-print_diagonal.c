#include "main.h"
/**
* print_diagonal - Draws a diagonal line on the terminal.
* @n: Size
**/
void print_diagonal(int n)
{
	int i, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (p = 0; p < i; p++)
			{
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
