#include "main.h"
#include <stdio.h>

/**
 * main - test factorial function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 5;
	printf("%d! = %d\n", n, factorial(n));

	n = 0;
	printf("%d! = %d\n", n, factorial(n));

	n = -3;
	printf("%d! = %d\n", n, factorial(n));

	return (0);
}
