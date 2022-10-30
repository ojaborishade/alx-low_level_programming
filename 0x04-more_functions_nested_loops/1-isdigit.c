#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: the int to be checked
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	int n = 0;

	if (c >= '0' && c <= '9')
		n = 1;

	return (n);
}
