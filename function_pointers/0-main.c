#include "function_pointers.h"
#include <stdio.h>

void print_name_as_is(char *name)
{
    printf("%s\n", name);
}

int main(void)
{
    print_name("Khulood", print_name_as_is);
    print_name("Hodor", NULL);
    return (0);
}
