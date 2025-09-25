#include "variadic_functions.h"

int main(void)
{
	print_all("ceis", 'B', 3, "StSchool");
	print_all("fcsi", 3.14435, 'H', NULL, 402);
	print_all(NULL);
	print_all("");
	return (0);
}
