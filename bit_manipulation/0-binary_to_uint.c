#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string.
 * Return: The converted number, or 0 .
 **/
unsigned int binary_to_uint(const char *b)
{
int r = 0;
int i = 0;

if (b == NULL)
return (0);

for (; b[i] != '\0'; i++)
{
if (b[i] == '0')
r = r << 1;
else if (b[i] == '1')
r = (r << 1) | 1;
else
return (0);
}
return (r);
}

