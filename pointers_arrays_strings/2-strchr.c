#include "main.h"
#include <stddef.h>
/**
 *  _strchr - Locates a character in a string.
 *  @s: string.
 *  @c: char
 *  Return: pointer to the first occurrence of the char or NULL if the charater is not found.
 *
 **/
char *_strchr(char *s, char c)
{
{
while (*s != '\0')
{
if (*s == c)
{	
return (s);
}
{
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
}
}
