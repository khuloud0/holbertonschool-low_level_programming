#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char seps[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		       '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		for (j = 0; seps[j] != '\0'; j++)
		{
			if (s[i] == seps[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
