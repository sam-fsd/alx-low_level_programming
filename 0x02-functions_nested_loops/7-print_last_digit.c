#include "main.h"

int print_last_digit(int);

/**
 * main - invokes prints_last_digit()
 * Return: 0 success
 */
int main(void)
{
	printf("%d", print_last_digit(98));
	printf("%d", print_last_digit(0));
	putchar('\n');

	return (0);
}
