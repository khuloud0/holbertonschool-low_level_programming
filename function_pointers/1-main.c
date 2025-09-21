#include "function_pointers.h"
#include <stdio.h>

/* دوال للاختبار */
void print_number(int n)
{
    printf("%d\n", n);
}

void multiply_by_two(int n)
{
    printf("%d\n", n * 2);
}

int main(void)
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {10, 20, 30};

    printf("Test 1: print_number\n");
    array_iterator(array1, 5, print_number);

    printf("\nTest 2: multiply_by_two\n");
    array_iterator(array2, 3, multiply_by_two);

    printf("\nTest 3: array NULL\n");
    array_iterator(NULL, 5, print_number);  /* ما يحدث شيء */

    printf("\nTest 4: action NULL\n");
    array_iterator(array1, 5, NULL);        /* ما يحدث شيء */

    return 0;
}
