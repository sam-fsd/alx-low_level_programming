#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - a new type dog
 * @name: name of a dog
 * @age: the age
 * @owner: who owns it
 *
 * Description: gives the basic characteristics of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
