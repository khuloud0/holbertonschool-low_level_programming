#include "main.h"

/**
 * _sqrt_helper - helper function to find natural square root
 * @n: number to find square root
 * @i: iterator starting from 1
 *
 * Return: natural square root of n, -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find square root
 *
 * Return: natural square root of n, -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1));
}
