#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int z;
	int j;

	for (z = 0; z < 8; z++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[z][j]);
		_putchar('\n');
	}
}
