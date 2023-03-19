#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: string.
 * @s2: string.
 * @n: number of char.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int p1 = strlen(s1);
unsigned int p2 = strlen(s2);
char *result = malloc(sizeof(char) * (p1 + n + 1));

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n >= p2)
{
n = p2;
}
if (result == NULL)
{
return (NULL);
}
memcpy(result, s1, p1);
memcpy(result + p1, s2, n);
result[p2 + n] = '\0';
return (result);
}
