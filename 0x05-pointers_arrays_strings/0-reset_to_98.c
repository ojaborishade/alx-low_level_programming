#include <stdio.h>

/**
* main -  reset_to_98 - To change the value at a memory address.
* Return: 0
*/

int main(void)
{
	int n;

	n = 98;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
