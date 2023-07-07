#include "main.h"

/**
* *_strchr - fills memory with constant
*
*@s: pointer to put the constant
*@c: constant
*
*Return: pointer to s
*/

char *_strchr(char *s, char c)
{
int aaa;
for (aaa = 0; s[aaa] >= '\0'; aaa++)
{
if (s[aaa] == c)
{
return (s + aaa);
}
}
return ('\0');
}
