#include "main.h"
#include <stdio.h>

/**
 * main - test is_prime_number function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 2;
	printf("%d is prime? %d\n", n, is_prime_number(n));

	n = 4;
	printf("%d is prime? %d\n", n, is_prime_number(n));

	n = 17;
	printf("%d is prime? %d\n", n, is_prime_number(n));

	n = 1;
	printf("%d is prime? %d\n", n, is_prime_number(n));

	return (0);
}
