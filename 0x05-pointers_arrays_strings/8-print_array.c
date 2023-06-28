#include "main.h"

/**
* print_array - prints n elements of an array of integers.
*
* @n: char array string type
* @a: string parameter input
*
* Return: Nothing
*/

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; i++)
{
if (x != (n - 1))
printf("%d, ", a[x]);
else
printf("%d", a[x]);
}
printf("\n");
}
