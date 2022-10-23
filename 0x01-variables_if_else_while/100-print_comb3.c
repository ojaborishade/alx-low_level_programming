#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
* Return: 0
*/

int main(void)
{
	int i = 1;

	while (i < 99)
	{
		if ((i % 10) < (i / 10))
		{
			i = i + 1 + 1 * (d / 10);
		}
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d < 98)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return(0);
}
