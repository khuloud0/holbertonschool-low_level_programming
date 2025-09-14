#include "main.h"

/**
 * main - tests malloc_checked
 *
 * Return: 0 on success
 */
int main(void)
{
    void *p;

    p = malloc_checked(98);
    free(p);

    return (0);
}
