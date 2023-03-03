#include "main.h"
/**
 * puts2 - prints the character of a string but. 1 yes and the next no.
 * @str: string
 **/
void puts2(char *str)
{
int n = 0;
while (*(str + n) != '\0')
{
if (n % 2 == 0)
_putchar(*(str + n));
n++;
}
_putchar('\n');
}
