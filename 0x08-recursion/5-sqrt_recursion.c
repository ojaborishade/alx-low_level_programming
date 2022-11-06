#include "main.h"

/**
 * check - checks for square root
 * @i: first int
 * @r: second int
 * Return: int
 */

int check(int i, int r)
{
	if (i * i == r)
		return (i);
	if (i * i > r)
		return (-1);
	return (check(i + 1, r));
}

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: int to find the sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
