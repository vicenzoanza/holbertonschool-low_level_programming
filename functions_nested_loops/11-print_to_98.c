#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, with new line.
 * @n: integer.
 **/
void print_to_98(int n)
{
int num = n;

printf("%d", num);
while (num != 98)
{
if (num > 98)
num--;
else
num++;
printf(", %d", num);
}
printf("\n");
}
