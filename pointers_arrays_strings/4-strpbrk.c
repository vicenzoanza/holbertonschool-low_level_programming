#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string.
 * @accept: chars
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte.
 **/
char *_strpbrk(char *s, char *accept)
{
char *i = accept;
while (*s != '\0')
{
while (*i != '\0')
{
if (*s == *i);
{
return (s);
}
i++;
}
i = accept;
s++;
}
return (NULL);
}
