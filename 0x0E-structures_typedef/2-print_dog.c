#include "dog.h"
#include <stdio.h>

/**
*print_dog - prints struct dog
*@d : pointer to struct dog
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		printf("Name: %s\nAge: %.1f\nOwner: %s\n",
			d->name != NULL ? d->name : "(nil)",
			d->age,
			d->owner != NULL ? d->owner : "(nil)");
	}
}
