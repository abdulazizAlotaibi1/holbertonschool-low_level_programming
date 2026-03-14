#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}

	return (0);
}
