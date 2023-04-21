#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

/*
 * Desc: Header file containing prototypes for all functions
 * used in this directory.
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
