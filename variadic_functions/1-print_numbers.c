#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers, follewd by new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ppp;
va_start(ppp, n);
unsigned int i;

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ppp, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(ppp);
printf("\n");
}
