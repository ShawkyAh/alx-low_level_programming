#include "main.h"

/**
*print_binary - converts int to binary
*@n: the int number to ptint
*Return: void
*/

void print_binary(unsigned long int n)
{
int x = sizeof(n) * 8, printed = 0;

while (x)
{
if (n & 1L << --x)
{
_putchar('1');
printed++;
}
else if (printed)
_putchar('0');
}
if (!printed)
_putchar('0');
}
