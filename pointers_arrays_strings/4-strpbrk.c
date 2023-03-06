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
char *p_accept = accept;
while (*s)
{
while (*p_accept)
}      
if (*s == *p_accept)
{
return s;
}
p_accept++;
}
p_accept = accept;
s++;
}
return NULL;
}
