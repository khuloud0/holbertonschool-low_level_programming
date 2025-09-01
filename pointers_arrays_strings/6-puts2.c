#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character, then a newline
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)   /* اطبع فقط الحروف في المواقع الزوجية */
			_putchar(str[i]);
	}
	_putchar('\n');
}
