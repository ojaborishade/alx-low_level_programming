#include <stdio.h>

/**
* main - prints all numbers in base 16 in lowercase
* Return: 0
*/

int main(void)
{
	char i;
	char I;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	for (I = 'a'; I <= 'f'; I++)
	{
	putchar(I);
	}
	putchar('/n');
	return (0);
}
