#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, l;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	l = atoi(argv[2]);
	printf("%d\n", i * l);

	return (0);
}
