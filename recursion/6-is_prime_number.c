#include "main.h"
/**
 * is_prime_number - returns a value if the input integer is a prime number
 * or not.
 * @n: number
 * Return: 1 if the number is a prime number. 0 if not.
 */
int is_prime_number(int n)
{
int i;

if (n <= 1)
{
return (0);
}
else if (n == 2 || n == 3)
{
return (1);
}
else if (n % 2 == 0)
{
return (0);
}
else
{
for (i = 3; i <= n / 2; i += 2)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
}
