#include "main.h"
/**
* swap_int - Function swaps the value
* @b: integer
* @a: integer
**/
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
