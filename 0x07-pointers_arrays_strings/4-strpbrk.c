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
int aqa, bqa;
char *z;

aaa = 0;
while (s[aqa] != '\0')
{
baa = 0;
while (accpet[bqa] != '\0')
{
if (accept[bqa] == s[aqa])
{
z = &s[aqa];
return (z);
}
bqa++;
}
aqa++;
}
return (0);
}
