#include "main.h"
#include <stdio.h>

/**
 * main - tests the _memcpy function
 *
 * Return: Always 0.
 */
int main(void)
{
	char src[10] = "123456789";
	char dest[10];
	unsigned int i;

	_memcpy(dest, src, 10);

	for (i = 0; i < 10; i++)
		printf("dest[%d] = %c\n", i, dest[i]);

	return (0);
}
