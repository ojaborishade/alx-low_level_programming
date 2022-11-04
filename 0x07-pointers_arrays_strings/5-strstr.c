#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurence of the substring
 * Return: a pointer to the beginning of substring or @NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, l = 0;

	while (haystack[i])
	{
		while (needle[l] && (haystack[i] == needle[0]))
		{
			if (haystack[i + l] == needle[l])
				l++;
			else
				break;
		}
		if (needle[l])
		{
			i++;
			l = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
