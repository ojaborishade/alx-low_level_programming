#include "main.h"

/**
 * binary_to_unit - converts a binary to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

 unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, base_two;

	if (!b)
		return (0);
	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len 
