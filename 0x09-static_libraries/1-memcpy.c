#include "main.h"

/**
* *_memcpy - function that copies memory area.
*
*@dest: memory area
*@src: source
*@n: length of src to be copied
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int qr;

for (qr = 0; qr < n; qr++)
{
dest[qr] = src[qr];
}
return (dest);
}
