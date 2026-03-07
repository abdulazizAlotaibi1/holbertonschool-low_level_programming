#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize first character if needed */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;

	/* Loop through the rest of the string */
	while (s[i] != '\0')
	{
		int j = 0;

		/* Check if previous character is a separator */
		while (separators[j] != '\0')
		{
			if (s[i - 1] == separators[j] && s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			j++;
		}
		i++;
	}

	return (s);
}
