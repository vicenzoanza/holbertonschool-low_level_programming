#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array : array.
 * @size : size of the array.
 * @action : pointerfunction to use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n = 0;

if (array == NULL || size == '\0' || action == NULL)
return;
for (; n < size; n++)
action(array[n]);
}
