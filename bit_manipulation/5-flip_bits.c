#include "main.h"
/**
 *
 *
 **/  
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int ran = n ^ m; 
unsigned int ppp = 0; 
    
while (ran != 0)
{
ppp += ran & 1;
ran >>= 1;
}
return (ppp);
}
