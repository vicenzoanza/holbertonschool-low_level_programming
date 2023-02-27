#include "main.h"
#include <stdio.h>
/**
* swap_int - Function swaps the value
* @x: integer
* @y: integer 
**/ 
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
