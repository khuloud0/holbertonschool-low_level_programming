#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test str_concat
 *
 * Return: 0
 */
int main(void)
{
	char *s;

	s = str_concat("Hello, ", "World!");
	if (s == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);

	s = str_concat(NULL, "Test");
	if (s == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	return (0);
}
