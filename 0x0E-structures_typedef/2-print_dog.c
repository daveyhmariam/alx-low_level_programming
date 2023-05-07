#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - a function that prints a struct dog
* @d: a pointer to the struct 'my_dog'
* Return: returns nothing
*/
void print_dog(struct dog *d)
{
	if(d==NULL)
	{
		return ;
	}
	if(!(d->name))
	printf("Name: (nil)");
	else
	printf("Name: %s\n",d->name);
	if(!(d->age))
	printf("Age: (nil)");
	else
	printf("Age: %f\n",d->age);
	if(!(d->owner))
	printf("Owner: (nil)");
	else
	printf("Owener: %s\n",d->owner);
}
