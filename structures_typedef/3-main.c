#include <stddef.h>
#include "dog.h"

int main(void)
{
	dog_t my_dog;

	init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
	print_dog(&my_dog);

	init_dog(&my_dog, NULL, 0, NULL);
	print_dog(&my_dog);

	return 0;
}
