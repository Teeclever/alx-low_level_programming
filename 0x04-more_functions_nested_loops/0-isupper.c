#include "main.h"
/**
 * _isupper - Is a program thats checks for uppercase character
 * @c: character to check
 * Return: always 0 or 1  (succesor)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
