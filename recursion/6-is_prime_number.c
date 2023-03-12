#include "main.h"
/**
 * is_prime_number - returns a value if the input integer is a prime number
 * or not.
 * @n: number
 * Return: 1 if the number is a prime number. 0 if not.
 **/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - recursive helper function for is_prime_number.
 * @n: number to check.
 * @i: current divisor.
 * Return: 1 if n is prime, 0 if not.
 **/
int is_prime_helper(int n, int i)
{
if (i == n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i + 1));
}

