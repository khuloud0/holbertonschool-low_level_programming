#include "variadic_functions.h"

/* Prototype of print_all */
void print_all(const char * const format, ...);

int main(void)
{
	print_all("ceis", 'A', 10, 3.14, "Hello");
	print_all("sfc", NULL, 2.718, 'B');
	print_all("xyz", 1, 2, 3);
	print_all(NULL);

	return 0;
}
