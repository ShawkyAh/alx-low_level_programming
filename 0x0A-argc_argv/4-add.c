#include <stdio.h>
#include <stdlib.h>

/**
* main- it all starts here
*@argc:number of commandline arguments
*@argv:pointer to an array of command line arguments.
*Return: Always 0
*/

int main(int argc, char *argv[])
{
int sum = 0;
char *c;

while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
return (printf("Error\n"), 1);
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
