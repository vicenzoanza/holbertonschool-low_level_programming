#include "main.h"
/**
* print_line - draws a straght line in the terminal
* @n: the number of lines to be displayed.
**/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
