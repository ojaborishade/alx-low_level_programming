#include "main.h"

/**
 * _strncat - joins two str with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: num of char to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
