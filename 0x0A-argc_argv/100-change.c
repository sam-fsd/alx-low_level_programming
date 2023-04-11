#include "main.h"

int min_coins(int);

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] < 0)
		printf("0\n");
	else
	{
		i = atoi(argv[1]);
		change = min_coins(i);

		print("%d\n", change);
	}

	return (0);
}

/**
 * min_coins - converts the coins into their respective cents
 * given a denomination
 * @i: money to be converted
 * Return: minimum coins
 */
int min_coins(int i)
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
			else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		count++;
	}

	return (count);
}
