#include "main.h"

/**
* _sqrt_recursion -  function that returns the natural square root of a number.
*
*@n: int
*@sq: square root
*
*Return: int
*/
int square(int n, int sq);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
* square -  find square root
*
*@n: int to find square root
*@sq: square root
*
*Return: int
*/

int square(int n, int sq)
{
if (sq * sq == n)
return (sq);
else if (sq * sq < n)
return (square(n, sq + 1));
else
return (-1);
}
