#include "main.h"

/**
* array_range- creates an array of intgers
*@min: starting int
*@max: max int
*Return: second array
*/

int *array_range(int min, int max)
{
int l, a;
int *p;

if (min > max)
return (NULL);
l = max - min + 1;
p = malloc(sizeof(int) * l);
if (!p)
return (NULL);
for (a = 0; a < l; a++)
p[a] = min++;

return (p);
}
