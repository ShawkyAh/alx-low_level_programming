#include <stdio.h>

/**
 * main- Entry point
 *
 * Description :  prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);
			if (d != 9)
			{
				putchar(',');
				putcahr(' ');
			}
		d++;
	}
	putchar('\n');

	return (0);
}
