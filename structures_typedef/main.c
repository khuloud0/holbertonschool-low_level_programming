#include <stdio.h>
#include "main.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Buddy", 3.5, "Alice");

    printf("Dog name: %s\n", my_dog.name);
    printf("Dog age: %.1f\n", my_dog.age);
    printf("Dog owner: %s\n", my_dog.owner);

    return 0;
}
