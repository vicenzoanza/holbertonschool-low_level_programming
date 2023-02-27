#include "main.h"

/**
* _isalpha - Alphabetic character 
* @c: character
* Return: 1 letter or 0
**/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
