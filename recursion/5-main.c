#include "main.h"
#include <stdio.h>

/**
 * main - test _sqrt_recursion function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 25;
	printf("sqrt(%d) = %d\n", n, _sqrt_recursion(n));

	n = 10;
	printf("sqrt(%d) = %d\n", n, _sqrt_recursion(n));

	n = -4;
	printf("sqrt(%d) = %d\n", n, _sqrt_recursion(n));

	return (0);
}
