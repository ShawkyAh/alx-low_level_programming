#include <stdio.h>

/**
 * main - Entry point
 *
 *  Descreption: print all alphabet letters
 *
 *  Return: Alawys 0 (Success)
 */

int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
