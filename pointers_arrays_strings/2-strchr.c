#include "main.h"
#include <stddef.h>
/**
 *  _strchr - Locates a character in a string.
 *  @s: string.
 *  @c: char
 *  Return: pointer to accurrence of the char or NULL if charater not found.
 **/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
