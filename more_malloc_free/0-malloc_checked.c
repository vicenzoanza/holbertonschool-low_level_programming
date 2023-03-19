#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using.
 * @b: memory size.
 * Return: pointer to the allocated memory.
 **/
void *malloc_checked(unsigned int b)
{
void *ppp = malloc(b);

if (ppp == NULL)
{
exit(98);
}
return (ppp);
}
