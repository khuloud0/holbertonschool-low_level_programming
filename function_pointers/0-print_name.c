#include "main.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: pointer to a function that takes a char* as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
