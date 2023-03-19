#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - Creates an array of integers.
 * @max: integer.
 * @min: integer.
 * Return: array of integer.
 **/
int *array_range(int min, int max)
{
int size = max - min + 1;
int *ppp = malloc(sizeof(int) * size);
int i = 0;

if (min > max)
{
return (NULL);
}
if (ppp == NULL)
{
return (NULL);
}
for (; i < size; i++)
ppp[i] = min++;
return (ppp);
}
