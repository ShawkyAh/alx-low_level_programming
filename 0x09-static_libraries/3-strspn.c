#include "main.h"

/**
* _strspn - gets the length of a prefix substring
*
*@s: string
*@accept: bytes
*
*Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int aaa, aab;
for (aaa = 0; s[aaa] != '\0'; aaa++)
{
for (aab = 0; accept[aab] != s[aaa]; aab++)
{
if (accept[aab] == '\0')
return (aaa);
}
}
return (aaa);
}
