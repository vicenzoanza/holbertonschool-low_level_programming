#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters.
 * @n : qunatuty of parameters
 * Return: results of the sum.
 **/
int sum_them_all(const unsigned int n, ...)
{
va_list arguments;
int sum = 0;
unsigned int i = 0;

va_start(arguments, n);
for (; i < n; i++)
{
sum += va_arg(arguments, int);
}
va_end(arguments);
return (sum);
}
