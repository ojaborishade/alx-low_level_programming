#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: value of n
 */

char *leet(char *n)
{
	int i, l;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (l = 0; l < 10; l++)
		{
			if (n[i] == s1[l])
			{
				n[i] = s2[l];
			}
		}
	}
	return (n);
}
