#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: the source of the string
 * @c: the character to find
 * Return: the str from the char found
 */

char *_strchr(char *s, char c)
{
	int i = 0, l;

	while (s[i])
	{
		i++;
	}
	for (l = 0; l <= i; l++)
	{
		if (c == s[l])
		{
			s += l;
			return (s);
		}
	}
	return ('\0');
}
