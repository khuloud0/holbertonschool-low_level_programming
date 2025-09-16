#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
	if (!my_dog)
		return (1);

	print_dog(my_dog);

	free_dog(my_dog);

	return (0);
}
