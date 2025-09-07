#include "main.h"
#include <stdio.h>

/**
 * main - test _strpbrk function
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "Holberton School";
	char *accept = "Sc";
	char *result;

	result = _strpbrk(str, accept);

	if (result != NULL)
		printf("First matching character: %c\n", *result);
	else
		printf("No matching character found\n");

	return (0);
}
