#include <stdio.h>
/**
 * main - A function that displays results of printf()
 * Return: 0(success)
 */
int main(void)
{
	int d;
	char c;
	long int Lnum;
	long long int LlongI;
	float fl;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(Lnum));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(LlongI));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(fl));

	return (0);
}
