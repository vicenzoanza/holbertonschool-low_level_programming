#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
