#include "main.h"

/**
* _strcmp - compares two strings
*
*@s1: string 1
*@s2: string 2
*
*Return: 1 if true, 0 if false
*/

int _strcmp(char *s1, char *s2)
{
int e = 0;

while (*s1)
{
if (*s1 != *s2)
{
e = ((int)*s1 - 48) - ((int)*s2 - 48);
}
s1++;
s2++;
}
return (e);
}
