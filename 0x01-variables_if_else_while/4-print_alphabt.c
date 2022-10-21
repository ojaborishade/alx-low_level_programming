#include <stdio.h>

/**
* main - prints the alphabets in lowercase followed by a new line.
* Return: 0
*/

int main(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
	putchar(i);
	i++;
	if (i == 'e')
	{
	i++;
	}
	else if (i == 'q')
	{
	i++;
	}
	}

	putchar('\n');
	return (0);
}
