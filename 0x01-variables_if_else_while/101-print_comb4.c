#include <stdio.h>

/**
* main - prints all possible different combination of 3 digit numbers.
* Return: 0
*/

int main(void)
{
	int i = 1;

	while (i < 90)
	{
		if ((i % 10) < (i / 10))
		{
			i = i + 1 + 1 * (i / 10);
		}
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar((i % 100) + '1');
		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}