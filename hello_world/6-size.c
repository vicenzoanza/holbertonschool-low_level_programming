#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char charType;
int intType;
long longType;
double doubleType;
float floatType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longType));
printf("Size of a long long int: %zu bytes\n", sizeof(doubleType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
