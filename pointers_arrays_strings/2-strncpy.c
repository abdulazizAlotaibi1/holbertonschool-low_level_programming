#include "main.h"

/**
 * _strncpy - copies a string using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copy characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* if n > src length, pad with '\0' */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
