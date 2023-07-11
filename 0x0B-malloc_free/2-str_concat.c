#include "main.h"
#include <stdlib.h>

/**
* _strlen -  find length of a string
*@s:string
*Return: int
*/

int _strlen(char *s)
{
int size = 0;

for (; s[size] != '\0'; size++)
;
return (size);
}

/**
* *str_concat -  function that concatenates two strings.
*@s1:string 1
*@s2:string 2
*Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
int z1, z2, i;
char *m;

if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";

z1 = _strlen(s1);
z2 = _strlen(s2);

m = malloc((z1 + z2) * (sizeof(char) + 1));
if (m == 0)
return (0);

for (i = 0; i <= z1 + z2; i++)
{
if (i < z1)
{
m[i] = s1[i];
}
else
{
m[i] = s2[i - z1];
}
m[i] = '\0';
return (m);
}
}
