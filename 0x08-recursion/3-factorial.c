#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer
 * Return: int
 */

int factorial(int n)
{
	int r;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		r = n * factorial(n - 1);
	}
	return (r);
}
