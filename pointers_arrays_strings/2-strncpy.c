#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: string copy destination.
 * @src: the string to copy.
 * @n: number of characters to copy.
 * Return: dest.
 **/
char *_strncpy(char *dest, char *src, int n)
{
int p = 0;

while (p < n && src[p] != '\0')
{
dest[p] = src[p];
p++;
}
if (p < n)
{
dest[p] = '\0';
p++;
}
return (dest);
}
