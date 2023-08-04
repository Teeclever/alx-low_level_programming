#include "main.h"

/**
 * clear_bit - a function that sets the value of a given bit to 0
 * @n: A pointer to the number
 * @index: index of a given bit
 *
 * Return: 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
