#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0;

	/* find string length */
	while (s[i] != '\0')
	{
		i++;
	}

	/* print characters in reverse */
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
