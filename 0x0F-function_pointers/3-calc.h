#ifndef CALC_H
#define CALC_H

/*
 * Desc: header file containing all structures and
 * prototypes used by the 3-main.c program.
 */

#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
