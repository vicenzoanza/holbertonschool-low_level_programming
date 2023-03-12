#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number.
 * @y: exponent.
 * Return: -1 to indicate an error and 1 if the exponent is 0.
 **/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
