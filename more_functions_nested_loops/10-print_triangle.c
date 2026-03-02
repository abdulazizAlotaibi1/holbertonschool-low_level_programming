#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle
 * @size: the size of the triangle
 *
 * Return : void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		/* print tabs first */
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');

		/* print hashes */
		for (j = 0; j < i + 1; j++)
			_putchar('#');

		/* new line at end of row */
		_putchar('\n');
	}
}
