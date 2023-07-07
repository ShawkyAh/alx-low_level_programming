#include "main.h"

/**
* *_strpbrk - search a string for any of a set of bytes
*
*@s: string
*@accept: string to match
*Return: a pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int aqa, bqa;
char *p;

aqa = 0;
while (s[aqa] != '\0')
{
bqa = 0;
while (accept[bqa] != '\0')
{
if (accept[bqa] == s[aqa])
{
p = &s[aqa];
return (p);
}
bqa++;
}
aqa++;
}
return (0);
}
