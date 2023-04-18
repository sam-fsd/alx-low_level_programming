#ifndef DOG_H
#define DOG_H

#include <stdio.h>
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
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
