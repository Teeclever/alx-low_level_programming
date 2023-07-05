#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	};
	_putchar('\n');
}
