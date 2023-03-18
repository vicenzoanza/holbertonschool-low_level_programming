#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array.
 * @c: specific char.
 * Return: pointer to the array.
 **/
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}
if (array == NULL)
{
return (NULL);
}
{
for (; i < size; i++)
array[i] = c;
}
return (array);
}
