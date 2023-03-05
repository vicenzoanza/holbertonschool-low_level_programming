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
char *p = dest;
while (*p != '\0')
{
p++;
}
int i = 0;
while (*src != '\0' && i < n)
{
*p++ = *src++;
i++;
}
*p = '\0';
return (dest);
}
