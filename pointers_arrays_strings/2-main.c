#include "main.h"
#include <stdio.h>

/**
 * main - test _strchr function
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "Holberton School";
	char c = 'S';
	char *result;

	result = _strchr(str, c);

	if (result != NULL)
		printf("Character '%c' found at position: %ld\n", c, result - str);
	else
		printf("Character '%c' not found\n", c);

	return (0);
}
