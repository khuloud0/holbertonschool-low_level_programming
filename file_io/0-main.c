#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	ssize_t n;

	n = read_textfile("Requiescat", 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile("Requiescat", 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
