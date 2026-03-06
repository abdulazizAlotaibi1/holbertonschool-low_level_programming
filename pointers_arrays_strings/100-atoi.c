#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the input string
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int len = 0, num_digits = 0, result = 0, multiplier = 1;
	int sign = 1, i;

	/* 1. find the digits and track the sign */
	while (s[len] != '\0')
	{
		if (num_digits > 0 && (s[len] < '0' || s[len] > '9'))
			break;

		if (s[len] == '-')
			sign *= -1;

		if (s[len] >= '0' && s[len] <= '9')
		{
			if (num_digits > 0)
				multiplier *= 10;
			num_digits++;
		}
		len++;
	}

	/* 2. calculate the integer from digits */
	for (i = len - num_digits; i < len; i++)
	{
		result += (s[i] - '0') * multiplier;
		multiplier /= 10;
	}

	return (result * sign);
}
