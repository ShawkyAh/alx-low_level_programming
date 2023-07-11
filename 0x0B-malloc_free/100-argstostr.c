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
* *argstostr - function that concatenates
* all the arguments of your program.
*@ac: int
*@av: argumnts
*Return: sting
*/

char *argstostr(int ac, char **av)
{
int a = 0, c = 0, d = 0, z = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (; a < ac; a++, c++)
c += _strlen(av[i]);

s = malloc(sizeof(char) * c + 1)
if (s == 0)
return (NULL);

for (a = 0; a < ac; a++)
{
for (d = 0; av[a][d] != '\0'; d++, z++)
s[z] = av[a][d];
s[z] = '\n';
z++;
}
s[z] = '\0';
return (s);
}
