#include "main.h"

/**
* is_prime_number -  function that returns 1
* if the input integer is a prime number
* otherwise return 0.
*
*@xy: int
*@n: int
*
*Return: 0 or 1
*/

int check_prime(int n, int xy);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
* check_prime -  check all number < n if they can divide it
*
*@xy: int
*@n: int
*
*Return: int
*/

int check_prime(int n, int xy)
{
if (xy >= n && n > 1)
return (1);
else if (n % xy == 0 || n <= 1)
return (0);
else
return (check_prime(n, xy + 1));
}
