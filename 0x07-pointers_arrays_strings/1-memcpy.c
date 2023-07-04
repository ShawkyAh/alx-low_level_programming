#include "main.h"

/**
* *_memcpy - function that copies memory area.
*
*@dest: memmory dest
*@src: source
*@n: length of src copied
*
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
{
unsigned int s;

for (s = 0; s < n; s++)
{
dest[s] = src[s];
}
return (dest);
}
