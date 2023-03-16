#include <stdio.h>
/**
 * main - A function that displays results of printf()
 * Return: 0(success)
 */
int main(void)
{
	int d, char c, long int Lnum, long long int lli, float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(Lnum));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}
