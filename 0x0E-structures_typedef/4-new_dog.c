#include <stdlib.h>
#include "dog.h"

/**
* new_dog - a function that creates a new dog
* @name: string name 
* @age: float age
* @owner: a string 'owner'
* Return: returns a pointer to a struct
* null if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int n, o, i;
dog_t *dog;
dog = malloc(sizeof(*dog));
if(dog == NULL || !(name) || !(owner))
{
free(dog);
return (NULL);
}
for(n = 0; name[n]; n++)
		;
	for(o = 0 ; owner[o]; o++)
		;
	dog->name = malloc(n + 1);
	dog->owner = malloc(o + 1);
	if(!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for(i=0; i < n; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	for(i = 0;i < o;i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return(dog);	
}
