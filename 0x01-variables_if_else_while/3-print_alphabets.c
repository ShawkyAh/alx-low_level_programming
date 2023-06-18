#include <stdio.h>

/**
 * main - Entry point
 *
 *  Descreption: print alphabet lettersin lowercase and uppercase
 *
 *  Return: Alawys 0 (Success)
 */

int main(void)
{
char al = 'a';
char AL = 'A';

while (al <= 'z')
{
putchar(al);
al++;
}
while (AL <= 'Z')
{
putchar(AL);
AL++;
}
putchar('\n');
return (0);
}
