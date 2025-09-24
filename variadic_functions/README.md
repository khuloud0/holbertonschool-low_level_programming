# Variadic Functions

This project is about variadic functions in C, which allow us to handle functions with variable number of arguments.

---

## Task 0: Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`.

### Code: 0-sum_them_all.c
```c
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int sum = 0;
    va_list args;

    if (n == 0)
        return (0);

    va_start(args, n);

    for (i = 0; i < n; i++)
        sum += va_arg(args, int);

    va_end(args);

    return (sum);
}
