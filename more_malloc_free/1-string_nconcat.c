#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to new string, NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, len1 = 0, len2 = 0;
    char *s;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    if (n >= len2)
        n = len2;

    s = malloc(sizeof(char) * (len1 + n + 1));
    if (s == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        s[i] = s1[i];

    for (j = 0; j < n; j++)
        s[i + j] = s2[j];

    s[i + j] = '\0';
    return (s);
}
