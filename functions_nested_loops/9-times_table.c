#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0 .
 **/
void times_table(void)
{
int i, n, result;

	for (i = 0; i <= 9; i++)
	{
	for (n = 0; n <= 9; n++)
	{
	result = (i * n);
	printf("%2d", result);
	if (n != 9)
	{
	printf(", ");
	}
	}
	printf("\n");
	}
}
