#include <stdio.h>
#include <stdlib.h>

/**
* main-prints number of arguments passed.
*@argc:number of commandline arguments
*@argv:pointer to an array of command line arguments.
*Return: 0
*/

int main(int argc, char const *argv[])
{
int i = 0;

while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
