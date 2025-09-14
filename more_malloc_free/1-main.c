#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    char *s;

    s = string_nconcat("Hello", "World", 3);
    if (s == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);

    s = string_nconcat(NULL, "World", 5);
    if (s == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);

    s = string_nconcat("Hello", NULL, 5);
    if (s == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);

    s = string_nconcat(NULL, NULL, 5);
    if (s == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);

    return (0);
}
