#include "variadic_functions.h"

/**
 * print_numbers - prints its parameters
 * @separator: character used to separate the arguments
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		int value = va_arg(nums, int);
		
		printf("%d", value);
		if (i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
