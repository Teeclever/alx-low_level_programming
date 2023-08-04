#include "main.h"

/**
 * set_bit - A function that set a bit at a given index to 1
 * @n: A pointer to the number to change
 * @index: index of the to
 *
 * Return: On 1 for (success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
