#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the num to find the square root of
 * Return: the square root if n has a natural root, else -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> recursive square root
 * @n: num
 * @i: iterator
 * Return: a num
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);

	return (_sqrt(n, i + 1));
}
