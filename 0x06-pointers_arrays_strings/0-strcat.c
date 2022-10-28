#include "main.h"

/**
 * _strcat - append string scr to dest
 * @ dest: string to be appended
 * @scr: source string
 * Return: a str
 */

char *_strcat(char *dest, char *scr)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = scr[i];
		len += 1;
	}
	dest = '\0';
	return (dest);
}
