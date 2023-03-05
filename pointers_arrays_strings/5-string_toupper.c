#include "main.h"
/**
 * string_toupper - converts all lowercase letters in a string to uppercase.
 * @p: string to modify.
 * Return: modified string.
 **/
char *string_toupper(char *p)
{
int i = 0;

for (; p[i] != '\0'; i++)
{
if (p[i] >= 'a' && p[i] <= 'z')
{
p[i] -= 32;
}
}
return (p);
}
