#include <stdio.h>

void fizzbuzz(void);

/**
 * main - invokes fizzbuzz()
 * Return: 0 (success)
 */
int main(void)
{
	fizzbuzz();
	putchar('\n');

	return (0);
}

/**
 * fizzbuzz - prints 0 to 100
 * for mutliples of 3 it prints Fizz
 * for multiples of 5 it prints Buzz
 * and for both multiples it prints FizzBuzz
 */
void fizzbuzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d ", i);
		}
		if (i != 100)
			putchar('\n');

		i++;
	}
}
