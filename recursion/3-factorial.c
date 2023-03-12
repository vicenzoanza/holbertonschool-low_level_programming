#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: number to factorize
 * Return: -1 to indicate an error. 1 if 0 is factorized.
 **/
int factorial(int n) 
{
int r = 1;
int i = 1;

if (n < 0) 
{
return -1; // error: invalid input
}
else if (n == 0)
{
return 1; // base case: 0! = 1
}
else
{
for (; i <= n; ++i)
{
r *= i;
}
return (r);
}
}