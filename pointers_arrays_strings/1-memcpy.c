#include "main.h"
/**
 * _memcpy - Copies n bytes from memory src to memory  dest.
 * @dest: destination memory
 * @src: source memory.
 * @n: bytes to copy.
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
