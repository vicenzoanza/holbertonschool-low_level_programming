#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     **/
int main(void)
{
char i, letter;
for (i = 'a'; i <= 'z'; i++)
if ((i != 'q') && (i != 'e'))
printf("%c", i);
printf("\n");
return (0);
}

