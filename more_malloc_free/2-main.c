#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    unsigned int i;

    arr = _calloc(5, sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return (0);
}
