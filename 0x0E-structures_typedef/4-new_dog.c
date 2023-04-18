#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to a string
 * @age: age to be intilized
 * @owner: pointer to a string
 * Return: a pointer to the new struct dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->name = strdup(name);
	ptr->age = age;
	ptr->owner = strdup(owner);

	return (ptr);
}
