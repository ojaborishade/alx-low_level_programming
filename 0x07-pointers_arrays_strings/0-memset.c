#include "main.h"

/**
 * _memset -  fills memory with a constant byte of the memory area
 *            pointed to by s with the constant byte b
 * @s: a pointer to the memory to be filled
 * @b: the character to fill the memory area
 * @n: the num of byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned int n;
	char *s, b;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
