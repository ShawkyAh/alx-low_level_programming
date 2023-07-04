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
unsigned int sheko;

for (sheko = 0; sheko < n; sheko++)
{
dest[sheko] = src[sheko];
}
return (dest);
}
