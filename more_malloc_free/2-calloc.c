#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: numbers of elements of array.
 * @size: size (in bytes) of the elements of the array.
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *ppp;

if (nmemb == 0 || size == 0)
return (NULL);
ppp = malloc(nmemb * size);
if (ppp == NULL)
return (NULL);
for (; i < nmemb * size; i++)
ppp[i] = 0;
return (ppp);
}
