#include "main.h"
#include <stdio.h>

/**
 * main - test _pow_recursion function
 *
 * Return: 0
 */
int main(void)
{
	int x, y;

	x = 2;
	y = 3;
	printf("%d^%d = %d\n", x, y, _pow_recursion(x, y));

	x = 5;
	y = 0;
	printf("%d^%d = %d\n", x, y, _pow_recursion(x, y));

	x = 2;
	y = -4;
	printf("%d^%d = %d\n", x, y, _pow_recursion(x, y));

	return (0);
}
