#include "main.h"
#include <stdio.h>

/**
 * main - test _strlen_recursion
 *
 * Return: 0
 */
int main(void)
{
	char *str = "Holberton";
	int len;

	len = _strlen_recursion(str);
	printf("%d\n", len);
	return (0);
}
