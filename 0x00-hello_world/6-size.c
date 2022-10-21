#include <stdio.h>

/**
* main - Prints "Sizes in bytes"
* Return: 0
*/

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	fprintf(stderr, "%s" "Size of a char: 1 byte(s)\n", (unsigned long)sizeof(c));
	fprintf(stderr, "%s" "Size of an int: 4 byte(s)\n", (unsigned long)sizeof(i));
	fprintf(stderr, "%s" "Size of a long int: 4 byte(s)\n", (unsigned long)sizeof(li));
	fprintf(stderr, "%s" "Size of a long long int: 8 byte(s)\n", (unsigned long)sizeof(lli));
	fprintf(stderr, "%s" "Size of a float: 4 byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
