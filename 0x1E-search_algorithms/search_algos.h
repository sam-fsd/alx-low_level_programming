#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(int a[], size_t l, size_t r);
#endif
