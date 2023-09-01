#include "main.h"

/**
*flip_bits - return number of bits that would need to be flipped to
* transform one number to anther
*@n: first number
*@m: seconed number
*Return: number of bits to flip to convert numbers
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int c = 0;

while (x)
{
if (x & 1ul)
c++;
x = x >> 1;
}
return (c);
}
