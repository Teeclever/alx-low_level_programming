#include "main.h"

/**
 * binary_to_uint - A function that converts a binary to unsigned int
 * @b: A string that contain binary number
 *
 * Return: the new converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0;
	int j;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		integer = integer * 2 + (b[j] - '0');
	}

	return (integer);
}
