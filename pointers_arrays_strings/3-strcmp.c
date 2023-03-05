#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string to compare.
 * @s2: second string to compare.
 * Return: difference between characters.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int p;

for (i = 0; s1[i] && s2[i]; i++)
{
p = s1[i] - s2[i];
if (s1[i] != s2[i])
{
return (p);
}
}
return (p);
}
