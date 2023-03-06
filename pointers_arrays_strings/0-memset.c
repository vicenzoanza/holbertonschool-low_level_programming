#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with the constant byte b.
 * @s : the address of memory to print.
 * @b : byte.
 * @n: bytes of the memory.
 * Return: pointer to the memory area s.
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
{
s[i] = b;
}
return (s);
}
