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

	printf("Size of char: %c\n", sizeof(c));
	printf("Size of int: %d\n", sizeof(d));
	printf("Size of long int: %ld\n", sizeof(Lnum));
	printf("Size of long long int: %lld\n", sizeof(LlongI));
	print("size of float: %f\n", sizeof(fl));

	return (0);
}
