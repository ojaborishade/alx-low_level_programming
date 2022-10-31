#include "main.h"

/**
 * swap_int - swaps the value of two int
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
