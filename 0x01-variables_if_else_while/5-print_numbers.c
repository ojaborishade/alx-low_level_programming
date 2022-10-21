#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0
* Return: 0
*/

int main(void)
{
	char i;

	i = 9;

	while (i <= 10)
	{
	putchar(i);
	i++;
	}

	putchar('\n');
	return (0);
}

