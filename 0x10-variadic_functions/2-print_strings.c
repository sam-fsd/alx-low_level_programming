#include "variadic_functions.h"

/**
 * print_strings - prints its parameters
 * @separator: character used to separate the arguments
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		char *value = va_arg(str, char *);

		if (value == NULL)
			value = "(nil)";

		printf("%s", value);
		if (i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
