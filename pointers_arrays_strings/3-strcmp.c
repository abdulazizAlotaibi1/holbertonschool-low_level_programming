#include "main.h"

/**
 * _strcmp - compares two strings like strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: negative, zero, or positive integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2)) /* compare until difference or end */
	{
		s1++;
		s2++;
	}

	/* return difference of first differing characters */
	return (*s1 - *s2);
}
