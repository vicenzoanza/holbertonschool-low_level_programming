#include <stdio.h>

/**
 * main - Prints all arguments it receives (one argument per line).
 * @argc : argument count.
 * @argv : argument variable.
 * Return: Always 0 .
 **/
int main(int argc, char *argv[])
{
int n = 0;

for (; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
