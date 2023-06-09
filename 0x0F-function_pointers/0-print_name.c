#include "function_pointers.h"

/**
 * print_name - invokes the function pointer with name
 * as argument
 * @name: pointer to a string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
