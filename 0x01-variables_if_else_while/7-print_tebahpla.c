#include <stdio.h>

/**
 * main - Entry point
 *
 *  Descreption: print alphabet lettersin lowercase reverse
 *
 *  Return: Alawys 0 (Success)
 */

int main(void)
{
char al = 'z';

while (al >= 'a')
{
putchar(al);
al--;
}
putchar('\n');
return (0);
}
