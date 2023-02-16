#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - Prints a random number and states whether
 *   *        it is positive, negative, or zero.
 *    *
 *     * Return: Always 0.
 *     **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%dis positive/n", n);
	else if (n = 0)
	printf("%dis zero/n", n);
	else
	printf("%dis negative/n", n);

	return (0);
}
