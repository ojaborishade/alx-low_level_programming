#include <stdio.h>

/**
* main - prints all possible combinations of single digit numbers
* Return: 0
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	if (i == '9')
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	putchar(0);
}
