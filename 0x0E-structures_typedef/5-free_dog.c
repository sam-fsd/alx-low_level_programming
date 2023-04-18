#include "dog.h"

/**
 * free_dog - frees dog structure if it exits
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
