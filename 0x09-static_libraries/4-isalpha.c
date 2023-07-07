#include "main.h"

/**
 * _isalpha - function to check if character is a letter
 * both lowercase and uppercase
 *
 * @c: takes input from other function
 *
 *Return: returns 1 'c' if true else 0
*/

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}

