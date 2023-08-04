#include "main.h"

/**
 * flip_bits - A function that counts the number of bits
 * @n: first value
 * @m: second value
 *
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number;
	unsigned long int value = n ^ m;
	int x, print = 0;

	for (x = 63; x >= 0; x--)
	{
		number = value >> x;
		if (number & 1)
			print++;
	}

	return (print);
}

