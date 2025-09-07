#include "main.h"
#include <stdio.h>

/**
 * main - test _strspn function
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "abcdef123";
	char *accept = "abcde";
	unsigned int len;

	len = _strspn(str, accept);

	printf("Length of prefix in '%s' containing only chars from '%s': %u\n",
	       str, accept, len);

	return (0);
}
