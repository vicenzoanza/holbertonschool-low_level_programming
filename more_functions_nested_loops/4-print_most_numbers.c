#include "main.h"
/**
* print_numbers - prints 0 to 9, dont print 2 and 4, followed by a new line.
**/
void print_numbers(void)
{
int n = 48;

while (n <= 57)
{
_putchar(n);
n++;
}
if (n != 50 && n != 52)
_putchar('\n');
}
