#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of integer.
 * @size: size of the array.
 * @cmp: pointer to function.
 * Return: index of the first element for which the cmp function.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
{
return (-1);
}
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
