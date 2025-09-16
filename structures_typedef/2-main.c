#include <stddef.h>
#include "dog.h"

int main(void)
{
	dog_t my_dog;

	init_dog(&my_dog, "Rex", 4.2, "Khalid");
	print_dog(&my_dog);

	init_dog(&my_dog, NULL, 0, NULL);
	print_dog(&my_dog);

	return 0;
}
