#include "dog.h"

/**
*print_dog - prints struct dog
*@d: pointer to dog struct
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(ni)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
