#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  *  * main - Prints a random number and states whether
 * can be greater than 5, 0, or less than 6 and not 0
 *
 * Return: Always 0.
 **/
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (last_digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n ,  n % 10);
else if (last_digit < 0)
printf("Last digit of %d is %d and is 0\n", n , n % 10);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n , n % 10);

return (0);
}
