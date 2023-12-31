#include "main.h"

/**
* print_diagsums -  a function that prints the sum of the two diagonals
* of a square matrix of integers.
*
*@a: second array of int type
*@size: size of array square
*
*/

void print_diagsums(int *a, int size)
{
int c, b1 = 0, b2 = 0;


for (c = 0; c < size; c++)
{
b1 += a[c];
b2 += a[size - a - 1];
a += size;
}
printf("%d, ", b1);
printf("%d\n", b2);
}
