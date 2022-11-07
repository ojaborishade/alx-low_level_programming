#include "main.h"

/**
 * str_checker - check if two strings are isentical
 * @s1: string_1 base address
 * @s2: string_2 base address
 * @i: left index
 * @l: special index (*)
 * Return: 1 if s is palindrome, else 0
 */

int str_checker(char *s1, char *s2, int i, int l)
{
	if (s1[i] == '\0' && s2[l] == '\0')
		return (1);
	if (s1[i] == s2[l])
		return (str_checker(s1, s2, i + 1, l + 1));
	if (s1[i] == '\0' && s2[l] == '*')
		return (str_checker(s1, s2, i, l + 1));
	if (s2[l] == '*')
		return (str_checker(s1, s2, i + 1, l) || str_checker(s1, s2, i, l + 1));
	return (0);
}

/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string
 * @s2: base address for string
 * Return: 1 if strings are identical
 */

int wildcmp(char *s1, char  *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
