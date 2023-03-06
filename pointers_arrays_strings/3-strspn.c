#include "main.h"
/**
 * _strspn - get the length.
 * @s: string.
 * @accept: chart.
 * Return: the number of bytes in the initial segment.
 **/
unsigned int _strspn(char *s, char *accept)
{
unsigned int p = 0;
int j;
int i;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
p++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (p);
}
