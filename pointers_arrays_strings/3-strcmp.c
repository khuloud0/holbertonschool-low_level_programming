#include "main.h"

/**
 * _strcmp - compares two strings like strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: negative if s1 < s2, 0 if equal, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	/* If we exit loop, one (or both) hit '\0' — difference decides */
	return (s1[i] - s2[i]);
}
