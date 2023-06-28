#include "main.h"

/**
* rev_string - reverses a string
*
*
* @s: string parameter input
*
* Return: Nothing
*/

void rev_string(char *s)
{
int l, a;
char t;

for (l = 0; s[1] != '\0'; ++l)
;

for (a = 0; a < l / 2; i++)
{
t = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = t;
}
}
