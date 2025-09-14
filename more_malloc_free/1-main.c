#include <stdio.h>
#include "main.h"

int main(void)
{
    char *s;

    s = string_nconcat("Best ", "School", 4);
    printf("%s\n", s);
    free(s);

    s = string_nconcat("", "Hello", 12);
    printf("%s\n", s);
    free(s);

    s = string_nconcat("Hello", "", 12);
    printf("%s\n", s);
    free(s);

    s = string_nconcat(NULL, "Hello", 0);
    printf("%s\n", s);
    free(s);

    s = string_nconcat(NULL, NULL, 10);
    printf("%s\n", s);
    free(s);

    return (0);
}
