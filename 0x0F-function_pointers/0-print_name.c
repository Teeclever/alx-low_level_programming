#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A program that print name using pointer to function
 * @name: A string pointer that add strin
 * @f: pointer to function passed
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
