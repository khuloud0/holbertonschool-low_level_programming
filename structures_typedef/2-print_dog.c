#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the information of a dog
 * @d: pointer to the dog to print
 *
 * Description: If d is NULL, does nothing.
 * If any element is NULL, prints (nil) instead.
 */
void print_dog(dog_t *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
