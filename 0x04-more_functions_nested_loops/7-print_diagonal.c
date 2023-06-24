#include "main.h"

/**
 * print_diagonal - print a diagonal line and
 * you can only using _putcher
 *
 * @n: is the number ot times the \ character
*/

void print_diagonal(int n)
{
int p, s;

if (n <= 0)
_putchar('\n');
else
{
for (p = 1; p <= n; p++)
{
for (s = 1; s <= p; s++)
_putchar('_');
_putchar(92);
_putchar('\n');
}
}
}
