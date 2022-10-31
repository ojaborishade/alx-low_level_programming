#include <unistd.h>

/**
 * _putchar - writed the character c  to stdout
 * @c: the char to print
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
