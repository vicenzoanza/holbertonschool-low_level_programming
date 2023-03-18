#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: a pointer to the array.
 **/
char *_strdup(char *str)
{
char *ppp = strdup(str);

if (str == NULL)
{
return (NULL);
}
return (ppp);
}
