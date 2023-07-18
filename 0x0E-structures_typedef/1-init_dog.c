#include "dog.h"
#include <stdio.h>
/**
*init_dog - initializes a dog
*@d: the dog to init
*@name: dogs name
*@age: dog age
*@owner: owners name
*
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
