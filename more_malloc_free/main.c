#include "main.h"

int main(void)
{
    void *p;

    p = malloc_checked(98);
    free(p);

    return (0);
}
