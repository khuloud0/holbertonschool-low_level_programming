#include "function_pointers.h"
#include <stdio.h>

/* دوال مقارنة للاختبار */
int is_positive(int n)
{
	return (n > 0);
}

int is_even(int n)
{
	return (n % 2 == 0);
}

int main(void)
{
	int array1[] = {-3, -2, 0, 4, 5};
	int array2[] = {-1, -5, -7};
	int size1 = 5;
	int size2 = 3;
	int index;

	printf("Test 1: is_positive\n");
	index = int_index(array1, size1, is_positive);
	printf("First positive index: %d\n", index); /* النتيجة: 3 */

	printf("\nTest 2: is_even\n");
	index = int_index(array1, size1, is_even);
	printf("First even index: %d\n", index); /* النتيجة: 1 */

	printf("\nTest 3: no match\n");
	index = int_index(array2, size2, is_positive);
	printf("No positive index: %d\n", index); /* النتيجة: -1 */

	printf("\nTest 4: array NULL\n");
	index = int_index(NULL, size1, is_positive);
	printf("NULL array: %d\n", index); /* النتيجة: -1 */

	printf("\nTest 5: cmp NULL\n");
	index = int_index(array1, size1, NULL);
	printf("NULL cmp: %d\n", index); /* النتيجة: -1 */

	return (0);
}
