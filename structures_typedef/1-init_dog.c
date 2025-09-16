#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type dog_t
 * @d: pointer to the dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function sets the name, age, and owner
 * fields of the given dog structure.
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
