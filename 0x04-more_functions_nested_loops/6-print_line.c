#include "main.h"

/**
 * print_line - print a stright line and
 * you can only using _putcher
 *
 * @n: is the number ot times the _ character
*/

void print_line(int n)
{
int line;

if (n <= 0)
_putchar('\n');
else
{
for (line = 1; line <= n; line++)
_putchar('_');
_putchar('\n');
}
}
