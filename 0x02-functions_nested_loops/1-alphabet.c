#include "main.h"

/**
* print_alphabet - Prints the alphabet.
* Return: 0
*/

void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
	return (0);

}
