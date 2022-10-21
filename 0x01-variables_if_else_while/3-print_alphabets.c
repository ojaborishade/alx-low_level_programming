#include <stdio.h>

/**
* main - prints the alphabets in, lowercase then uppercase
* Return: 0
*/

int main(void)
{
	char i;
	char I;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (I = 'A'; I <= 'Z'; I++)
	{
	putchar(L);
	}
	putchar('\n');
	return (0);
}
