#include "main.h"

/**
* *_strpbrk - gets the length of a prefix substring
*
*@s: string
*@accept: bytes
*
*Return: unsigned int
*/

char *_strpbrk(char *s, char *accept)
{
int aaa, baa;
char *p;

aaa = 0;
while (s[aaa] != '\0')
{
baa = 0;
while (accpet[baa] != '\0')
{
if (accept[baa] == s[aaa])
{
p = &s[aaa];
return (p);
}
baa++;
}
aaa++;
}
return (0);
}
