#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char argument
 * @args: va_list of arguments
 * @sep: separator string
 */
void print_char(va_list args, char *sep)
{
	printf("%s%c", sep, va_arg(args, int));
}

/**
 * print_int - prints an int argument
 * @args: va_list of arguments
 * @sep: separator string
 */
void print_int(va_list args, char *sep)
{
	printf("%s%d", sep, va_arg(args, int));
}

/**
 * print_float - prints a float argument
 * @args: va_list of arguments
 * @sep: separator string
 */
void print_float(va_list args, char *sep)
{
	printf("%s%f", sep, va_arg(args, double));
}

/**
 * print_string - prints a string argument
 * @args: va_list of arguments
 * @sep: separator string
 */
void print_string(va_list args, char *sep)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";

	if (!format)
	{
		printf("\n");
		return;
	}

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(args, sep);
				break;
			case 'i':
				print_int(args, sep);
				break;
			case 'f':
				print_float(args, sep);
				break;
			case 's':
				print_string(args, sep);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
