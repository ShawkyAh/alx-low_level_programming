#include "main.h"

/**
 *numLength - returns the length of stirng
*
*@num: operand number
*
*Return: number of digital
*/

int numLength(int num)
{
int l = 0;

if (!num)

	return (1);
while (num)
{
num = num / 10;
l += 1;
}
return (l);
}

/**
 *main - Entry point
*
*Description: prints the first 98 fibonacci numbers
*starting with 1 and 2 followed by new line
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int count, ini;
unsigned long f1 = 0, f2 = 1, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

for (count = 1; count <= 98; count++)
{
if (f1o > 0)
printf("%lu", f1o);
ini = numLength(mx) - 1 - numLength(f1);
while (f1o > 0 && ini > 0)
{
printf("%d", 0);
ini--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
sumo = f1o + f2o + (f1 + f2) / mx;
f1 = f2;
f1o = f2o;
f2 = sum;
f2o = sumo;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
