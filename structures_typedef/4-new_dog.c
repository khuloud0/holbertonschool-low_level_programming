#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	size_t len_name, len_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len_name = name ? strlen(name) + 1 : 0;
	len_owner = owner ? strlen(owner) + 1 : 0;

	if (len_name)
	{
		name_copy = malloc(len_name);
		if (!name_copy)
		{
			free(d);
			return (NULL);
		}
		strcpy(name_copy, name);
	}
	else
		name_copy = NULL;

	if (len_owner)
	{
		owner_copy = malloc(len_owner);
		if (!owner_copy)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		strcpy(owner_copy, owner);
	}
	else
		owner_copy = NULL;

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
