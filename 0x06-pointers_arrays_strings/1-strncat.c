#include "main.h"

/**
* _strcat - function that concatenates
* two strings.
*@dest: pointer to destenation input
*@src: pointer to source input
*@n: most number of bytes from @src
*
*Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;
while (dest[c])
c++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = '\0';
return (dest);
}
