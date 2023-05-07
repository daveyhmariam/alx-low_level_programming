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
	int lname,lowner,i;
	dog_t *dog;
	dog=malloc(sizeof(*dog));
	if(dog == NULL || !(name) || !(owner))
		{
			free(dog);
			return NULL;
		}
	for(lname=0;name[lname];lname++)
		;
	for(lowner=0;owner[lowner];lowner++)
		;
	dog->name = malloc(lname + 1);
	dog->owner = malloc(lowner + 1);
	if(!(dog->owner) || !(dog->name))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return NULL;
	}
	for(i=0;i<lname;i++)
		dog->name[i]=name[i];
	dog->name[i]='\0';
	dog->age=age;
	for(i=0;i<lowner;i++)
		dog->owner[i]='\0';
	dog->owner[i]='\0';
	return(dog);	
}
