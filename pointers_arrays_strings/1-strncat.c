#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: string concatenate.
 * @src: string to concatenate.
 * @n: number of characters to concatenate.
 * Return: dest.
 **/
char *_strncat(char *dest, char *src, int n)
{
char nn = dest;
while (nn != '\0')
{
nn++;
}
int i = 0;
while (*src != '\0' && i < n)
{
nn++ = *src++;
i++;
}
nn = '\0';
return (dest);
}
