#include <stdio.h>

/**
 * main- Entry point
 *
 * Description :  prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int da = 0, db;

	while (da <= 9)
	{
		db = 0;
		while (db <= 9)
		{
		if (da != db && da < db)
		{
			putchar(da + 48);
			putchar(db + 48);
		if (da+db != 17)
		{
			putchar(',');
			putchar(' ');
			}
		}
			db++;
		}
		da++;
	}
	putchar('\n');

	return (0);
}
