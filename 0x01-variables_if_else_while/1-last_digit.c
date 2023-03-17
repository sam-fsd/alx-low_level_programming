#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Checks if a number passes the condition in if block
 * displays the output using printf()
 * Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_num = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (n < 6 && n == 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
	return (0);
}
