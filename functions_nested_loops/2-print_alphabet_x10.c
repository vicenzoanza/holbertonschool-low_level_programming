#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 **/

void print_alphabet_x10(void)
{
char ch = 'a';
int i = 0;

for (; i <= 9; i++)
{
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
ch = 'a';
_putchar('\n');
}
}
