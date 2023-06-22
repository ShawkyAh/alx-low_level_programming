#include "main.h"

/**
 *main - Entry point
*
*Description: prints the sum of even-value
*fibonacci sequance not exceed 4 millions
*
*Return: Always 0 (Success)
*/

int main(void)
{
float ts;
unsigned long f1 = 0, f2 = 1, sum;

while (1)
{
sum = f1 + f2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
ts += sum;
f1 = f2;
f2 = sum;
}
printf("%.0\n", ts);
return (0);
}
