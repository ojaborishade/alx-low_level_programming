#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
