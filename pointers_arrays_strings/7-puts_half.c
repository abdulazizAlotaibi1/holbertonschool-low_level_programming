#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
		len++;

	start = (len + 1) / 2;	/* determine starting index */

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
