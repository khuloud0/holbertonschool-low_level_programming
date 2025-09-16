#include <stdlib.h>
#include "dog.h"

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
