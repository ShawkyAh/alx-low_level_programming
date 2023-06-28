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

for (a = 0; a < l / 2; a++)
{
t = s[a];
s[a] = s[l - 1 - a];
s[l - 1 - a] = t;
}
}
