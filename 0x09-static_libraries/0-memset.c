#include "main.h"

/**
* _memset - fills memory with constant byte
*
*@s: pointer to to put the constant
*@b: Constant
*@n: max bytes to use
*
*Return: pointer to source input
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
