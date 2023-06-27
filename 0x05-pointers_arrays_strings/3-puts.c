#include "main.h"
/**
* _puts - printer a string, followed by a newline to stdout
*
*
* @str: string parameter to print
*
* Return: Nothing
*/

void _puts(char *str)
{
while (*str != '\0')
{
_puts(*str + 0);

str++;
}
_putchar('\n');
}
