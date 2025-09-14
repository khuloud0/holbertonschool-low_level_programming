#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 with first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 * Return: pointer to newly allocated memory, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len_s1 = (s1) ? strlen(s1) : 0;
    unsigned int len_s2 = (s2) ? strlen(s2) : 0;
    unsigned int i;
    char *new_str;

    if (n > len_s2)
        n = len_s2;

    new_str = malloc(len_s1 + n + 1);
    if (!new_str)
        return NULL;

    for (i = 0; i < len_s1; i++)
        new_str[i] = s1[i];
    for (i = 0; i < n; i++)
        new_str[len_s1 + i] = s2[i];
    new_str[len_s1 + n] = '\0';

    return new_str;
}
