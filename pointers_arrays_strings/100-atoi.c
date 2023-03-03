#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string to convert
 * return: string converted
 **/
int _atoi(char *s)
{
    int results = 0;
    int sign = 1;
    int finish;

    while (*s != '\0' && (*s < '0' || *s > '9')) 
    {
        if (*s == '-') 
	{
            sign = -sign;
        }
        s++;
    }

    while (*s >= '0' && *s <= '9') 
    {
        results = results * 10 + (*s - '0');
        s++;
    }
finish = sign * results;
return (finish);
}
