#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: dest to string concatenate.
 * @src: string to concatenate.
 * Return: pointer |dest.
 **/
char *_strcat(char *dest, char *src)
{
char n = dest;
while (n != '\0')
{
n++;
}
while (*src != '\0')
{
n++ = *src++;
}
n = '\0';
return (dest);
}
