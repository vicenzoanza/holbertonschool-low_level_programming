#include "main.h"
#include <stdio.h>
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n:number to convert
 * @index: number of the bit.
 * return: the value of the bit at index index or -1 if an error occured.
 **/
int get_bit(unsigned long int n, unsigned int index)
{
int xxx = (n >> index) & 1;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return (xxx);
}
