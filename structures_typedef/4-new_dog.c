#include <stdlib.h>
#include "dog.h"

/**
 * str_copy - makes a copy of a string
 * @str: string to copy
 *
 * Return: pointer to the new string, or NULL if str is NULL or malloc fails
 */
char *str_copy(char *str)
{
	size_t len = 0, i;
	char *copy;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

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

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = str_copy(name);
	if (name && !d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = str_copy(owner);
	if (owner && !d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
