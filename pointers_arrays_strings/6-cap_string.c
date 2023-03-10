#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to modify.
 * Return: string modified.
 */
char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
}
else if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
i++;
}
return (s);
}
