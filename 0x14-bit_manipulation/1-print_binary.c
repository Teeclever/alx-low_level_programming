#include "main.h"

/*
 * print_binary - A function that print binarry
 * @n: passes in an integer
 * Return: void
 */

void  print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
