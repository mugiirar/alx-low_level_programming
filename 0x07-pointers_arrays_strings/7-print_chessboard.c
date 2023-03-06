#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int d, k;

	for (d = 0; d < 8; d++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[d][k]);
		}
		_putchar('\n');
	}
}
