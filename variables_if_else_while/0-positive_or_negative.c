#include<stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
else if n = 0
{
printf("is zero");
}
else(n < 0)
{
printf("is negative");
}
return (0);
}
