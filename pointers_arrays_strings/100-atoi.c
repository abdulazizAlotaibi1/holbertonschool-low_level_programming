#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	unsigned int i = 0, digits = 0, num = 0, mult = 1, start;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (digits > 0 && (s[i] < '0' || s[i] > '9'))
			break;

		if (s[i] == '-')
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (digits > 0)
				mult *= 10;
			digits++;
		}
		i++;
	}

	start = i - digits;

	while (start < i)
	{
		num += (s[start] - '0') * mult;
		mult /= 10;
		start++;
	}

	return (num * sign);
}
