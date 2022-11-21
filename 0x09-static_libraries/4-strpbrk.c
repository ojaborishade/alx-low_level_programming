#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the first occurence in the str
 * @accept: the match of the byte, or @NULL if no such byte
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (s);
}
