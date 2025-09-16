#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	size_t i, len_name = 0, len_owner = 0;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	if (name)
	{
		while (name[len_name])
			len_name++;
		name_copy = malloc(len_name + 1);
		if (!name_copy)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len_name; i++)
			name_copy[i] = name[i];
	}
	else
		name_copy = NULL;

	if (owner)
	{
		while (owner[len_owner])
			len_owner++;
		owner_copy = malloc(len_owner + 1);
		if (!owner_copy)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len_owner; i++)
			owner_copy[i] = owner[i];
	}
	else
		owner_copy = NULL;

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
