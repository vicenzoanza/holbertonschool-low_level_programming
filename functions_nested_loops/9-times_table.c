#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0 .
 **/
void times_table(void)
{
int column, row, num;

for (row = 0; row <= 9; row++)
{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
		num = (row * column);
		if ((num / 10) > 0)
		{
		_putchar((num / 10) + '0');
		}
		else
		{
		_putchar(' ');
		}
		_putchar((num % 10) + '0');
		if (column < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
