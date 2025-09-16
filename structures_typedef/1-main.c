#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "Holberton School!";
    char *dup;

    dup = _strdup(str);
    if (dup == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }

    printf("Original: %s\n", str);
    printf("Duplicate: %s\n", dup);

    free(dup);
    return (0);
}
