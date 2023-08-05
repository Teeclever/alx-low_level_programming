#include "main.h"

/**
  * get_endianness - A function that checks the endianness
  * Return: 0 for large and 1 for small
  */

int get_endianness(void)
{
	unsigned int j = 1;

	char *z = (char *)&j;

	return (*z);
}
