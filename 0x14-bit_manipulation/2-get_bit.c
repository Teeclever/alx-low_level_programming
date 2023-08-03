#include "main.h"

/**
 * get_bit - a fuction that return value of a bit ain a decimal number
 * @n: the given number
 * @index: bit index
 *
 * Return: value of the result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

     value = (n >> index) & 1;

	return (value);
}
