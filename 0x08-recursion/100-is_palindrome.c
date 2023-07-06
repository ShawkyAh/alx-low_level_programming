#include "main.h"
/**
* last_index -  returns the last inex of a string (counts the null char)
*
*@s: pointer the string
*Return: int
*/

int is_palindrome(char *s);
int check(char *s, int a, int b, int c);

int last_index(char *s)
{
int n = 0;

if (*s > '\0')
n += last_index(s + 1) + 1;

return (n);
}

/**
* is_palindrome -  check if a string is a palindrome
*
*@s: string to check
*Return: 0 or 1
*/

int is_palindrome(char *s)
{
int b = last_index(s);

return (check(s, 0, b - 1, b % 2));
}

/**
* check -  check if a string is a palindrome
*
*@s: string
*@a: int moves from right to left
*@b: int moves from left to right
*@c: int
*Return: 0 or 1
*/

int check(char *s, int a, int b, int c)
{
if ((a == b && c != 0) || (a == b + 1 && c == 0))
return (1);
else if (s[a] != s[b])
return (0);
else
return (check(s, a + 1, b - 1, c));
}
