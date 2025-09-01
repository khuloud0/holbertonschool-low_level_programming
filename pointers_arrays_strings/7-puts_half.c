#include "main.h"

/**
 * puts_half - prints the second half of a string, then a newline
 * @str: pointer to the string
 *
 * Description: If the number of characters is odd, prints the last
 * (len - 1) / 2 characters; otherwise prints the last len / 2.
 */
void puts_half(char *str)
{
	int i = 0, len = 0, start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
