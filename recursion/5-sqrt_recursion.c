#include "main.h"

/**
 * sqrt_helper - checks candidate for square root recursively
 * @n: number to find square root of
 * @i: current candidate
 *
 * Return: natural square root of n, -1 if none
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root, -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1));
}
