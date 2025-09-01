#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int i = 0, sign = 1;
    unsigned int result = 0;

    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    if (sign < 0)
        return (-result);
    return (result);
}
