#include "main.h"

/**
 * _memcpy - copies bytes from src to dest
 * @n: bytes to be copied
 * @src: area to be copied from
 * @dest: area to be copied to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
