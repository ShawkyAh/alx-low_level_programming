#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - function that returns a pointer to
* a 2 dimensional array of integers.
*@width: int
*@height: int
*Return: second array
*/

int **alloc_grid(int width, int height);
{
int **t, a, z;
t = malloc(sizeof(*t) * height);

if (width <= 0 || height <= 0 || t == 0)
{
return (NULL);
}
else
{
for (a = 0; a < height; i++)
{
t[a] = malloc(sizeof(**t) * width);
if (t[a] == 0)
{
while (a--)
free(t[i]);
free(t);
return (NULL);
}
for (z = 0; z < width; z++)
t[a][z] = 0;
}
}
return (t);
}
