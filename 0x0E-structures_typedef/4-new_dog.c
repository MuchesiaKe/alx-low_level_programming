#include "dog.h"

/**
*new_dog - creates new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: pointer of the  new dog
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;
	return (new_dog);
}
