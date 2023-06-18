#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: print alphabet lettersin lowercase Except q ,e
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
char al = 'a';
while (al <= 'z')
{
if (al == 'e' || al == 'q')
al++;
putchar(al);
al++;
}
putchar('\n');
return (0);
}
