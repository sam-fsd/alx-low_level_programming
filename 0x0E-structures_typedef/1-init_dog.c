#include "dog.h"

/**
 * init_dog - initilizes a variable of type struct dog
 * @d: pointer to struct
 * @name: pointer value
 * @age: pointer value
 * @owner: pointer to char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
