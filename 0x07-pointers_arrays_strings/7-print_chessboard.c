#include "main.h"

/**
 * print_chessboard - prints chessboard to stdout
 * @a: array of characters to be printed as chessboard
 */
void print_chessboard(char (*a)[8])
{
	const int ROWS = 8;
	const int COLS = 8;
	
	int row, col;

	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col < COLS; col++)
			_putchar(a[row][col]);

		if (a[row][COLS - 1] != '\0')
			_putchar('\n');
	}
}	
