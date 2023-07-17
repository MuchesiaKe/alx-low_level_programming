#include "dog.h"
#include <stdlib.h>

/**
*free_dog - frees dog struct
*@d:  pointer to struct to be freed
**/

void free_dog(dog_t *d)
{
	free(d);
}
