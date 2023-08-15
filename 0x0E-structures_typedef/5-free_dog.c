#include "dog.h"

/**
*free_dog - frees dog memory
*@d: pointer to dog memory
**/

void free_dog(dog_t *d)
{
	free(d);
}
