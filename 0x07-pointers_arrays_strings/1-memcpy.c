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
unsigned int ash;

for (ash = 0; ash < n; ash++)
{
dest[ash] = src[ash];
}
return (dest);
}
