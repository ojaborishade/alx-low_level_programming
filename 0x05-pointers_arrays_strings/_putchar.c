#include <unistd.h>

/**
 * _putchar - writed the character c  to stdout
 * @c: the char to print
 * Return: on sucess 1
 * On error -1, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
