#include "variadic_functions.h"

/* Prototype of print_numbers */
void print_numbers(const char *separator, const unsigned int n, ...);

int main(void)
{
	print_numbers(NULL, 4, 1, 2, 3, 4);
	print_numbers(", ", 5, 10, 20, 30, 40, 50);
	print_numbers(", ", 0);
	print_numbers(" - ", 3, 7, 8, 9);

	return 0;
}
