#include "variadic_functions.h"

/* Prototype of print_strings */
void print_strings(const char *separator, const unsigned int n, ...);

int main(void)
{
	print_strings(", ", 4, "Alice", "Bob", "Charlie", "Diana");
	print_strings(NULL, 3, "Hello", "World", "!");
	print_strings(" - ", 5, "One", NULL, "Three", "Four", NULL);
	print_strings(", ", 0);

	return 0;
}
