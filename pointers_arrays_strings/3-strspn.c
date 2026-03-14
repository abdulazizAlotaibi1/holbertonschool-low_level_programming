#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to scan
 * @accept: characters to match
 *
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;
	int found;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
			break;

		count++;
		i++;
	}

	return (count);
}
