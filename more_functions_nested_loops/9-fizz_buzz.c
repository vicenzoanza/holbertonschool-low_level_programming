#include "main.h"
#include <stdio.h>
/**
 * main - Write a program that prints the numbers from 1 to 100, followed
 * by a new line.
 *
 **/ 
int main()
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");      
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", n);
}
}
printf("\n");
return (0);
}
