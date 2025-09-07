#include "main.h"
#include <stdio.h>

/**
 * main - test _strstr function
 *
 * Return: Always 0
 */
int main(void)
{
	char *haystack = "Holberton School";
	char *needle = "ber";
	char *result;

	result = _strstr(haystack, needle);

	if (result != NULL)
		printf("Substring found: %s\n", result);
	else
		printf("Substring not found\n");

	return (0);
}
