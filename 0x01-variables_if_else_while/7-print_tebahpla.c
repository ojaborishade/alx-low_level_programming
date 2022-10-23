#include <stdio.h>

/**
* mai - prints the lowercase alphabets in reverse.
* RETURN: 0
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
