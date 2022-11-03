#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the input
 * @accept: src
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			eise if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
