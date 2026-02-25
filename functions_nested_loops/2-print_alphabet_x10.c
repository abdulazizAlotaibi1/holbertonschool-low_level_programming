#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Description: Each alphabet line is followed by a new line.
 *              Uses _putchar twice per line only.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}

