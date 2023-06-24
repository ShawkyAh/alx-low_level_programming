#include "main.h"

/**
 * print_square - print a square using character #
 * and you can only using _putcher
 *
 * @size: is the size of the square
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
int row, colum;

for (row = 1; row <= size; row++)
{
for (colum = 1; colum <= n; colum++)
_putchar('#');
_putchar('\n');
}
}
