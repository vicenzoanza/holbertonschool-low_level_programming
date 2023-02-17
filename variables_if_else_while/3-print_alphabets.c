#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0
 **/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
printf("%c", i);
for (i = 'A'; i <= 'Z'; i++)
printf("%c", i);
printf("\n");
return (0);
}
