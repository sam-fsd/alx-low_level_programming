#include "variadic_functions.h"

/**
 * sum_them_all - adds all its parameters
 * @n: number of arguments to be passed
 * @...: variable number of arguments 
 *
 * Return: total sum of arguments if n = 0
 * return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;
	
	va_start(nums,n);

	for (i = 0; i < n; i++)
		sum += va_args(nums, int);

	var_end(nums);

	return (sum);
}

