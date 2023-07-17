#include "dog.h"
#include <stdlib.h>

/**
*new_dog - creates new dog
*@name	:  name of the dog
*@age : age of the dog
*@owner : owner of the dog
*Return: pointer to the struct
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *created_dog;

	created_dog = malloc(sizeof(dog_t));
	if (created_dog == NULL)
		return (NULL);
	created_dog->name = name;
	created_dog->owner = owner;
	created_dog->age = age;
	return (created_dog);
}
