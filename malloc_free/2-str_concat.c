#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string destination.
 * @s2: string to move.
 * Return: a pointer to a newly allocated space in memory.
 **/ 
char *str_concat(char *s1, char *s2)
{
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *ppp = malloc(len1 + len2 + 1);


if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (ppp == NULL)
{
return (NULL);
}
{
strcpy(ppp, s1);
strcat(ppp, s2);
}
return (ppp);
}
