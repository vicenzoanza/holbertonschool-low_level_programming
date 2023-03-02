#include "main.h"
#include <stdio.h>
/**
 * rev_string - Print text and after print the same text in reverse.
 * @s: string.
 **/
void rev_string(char *s)
{
char rev;
int i, j = 0;

for (i = 0; s[i] != '\0'; i++)
{
}
	for (; j < i / 2 ; j++)
	{
		rev = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = rev;
	}
}
