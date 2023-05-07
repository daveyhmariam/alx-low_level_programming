#include <stdlib.h>
#include "dog.h"

/**
* new_dog - a function that creates a new dog
* @name: a string 'name'
* @age: a float 'age'
* @owner: a string 'owner'
* Return: returns a pointer to a struct
* null if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char* nm=name;
float ag=age;
char* own=owner;
dog_t *d=malloc(sizeof(dog_t));
if (!(d))
{
	return (NULL);
}
d->name=nm;
d->age=ag;
d->owner=own;
return (d);
}
