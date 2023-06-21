#include "main.h"

/**
 * print_alphabet_x10 - Is an entry to print 10 times the alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char word;

	int t;

	t = 0;

	while (t < 10)
	{
		word = 'a';

		while (word <= 'z')
		{
			_putchar(word);
			word++;
		}
	_putchar('\n');
	t++;
	}
}
