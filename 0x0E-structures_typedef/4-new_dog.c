#include <stdlib.h>
#include "dog.h"

/**
* new_dog - a function that creates a new dog
* @name: a string 'name'
* @age: a float 'age'
* @owner: a string 'owner'
* Return: returns a pointer to a struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d=malloc(sizeof(dog_t));
if (!(d))
{
	return (NULL);
}
d->name=name;
d->age=age;
d->owner=owner;
return (d);
}
