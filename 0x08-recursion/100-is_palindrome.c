#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to be printed
 * Return: the len of str
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - check if s is palindrome
 * @s: str base
 * @i: left index
 * @l: right index
 * Return: 1 if s is a palindrome, else 0
 */

int pal_checker(char *s, int i, int l)
{
	if (s[i] == s[l])
		if (i > l / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, l - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if s is palindrome
 * @s: base address for str
 * Return: 1 if n is prime, else 0
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
