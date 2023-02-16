#include <stdlib.h>
#include <stdio.h>
/**
 *  *  * main - Prints a random number and states whether
 * can be greater than 5, 0, or less than 6 and not 0
 *
 * Return: Always 0.
 **/
int main(void)
{
int n, last_digit;
printf("Enter a number: ");
scanf("%d", &number);
srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &number);
if (last_digit > 5)
printf("%d and is greater than 5\n", n);
else if (last_digit < 0)
printf("%d and is 0\n", n);
else
printf("%d and is less than 6 and not 0\n", n);

return (0);
}
