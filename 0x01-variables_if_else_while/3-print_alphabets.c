#include <stdio.h>

/**
 * main - entry to program that print alphabet in lowercase and then uppercase
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char ta;

	for (ta = 'a'; ta <= 'z'; ta++)
	putchar(ta);
	for (ta = 'A'; ta <= 'Z'; ta++)
	putchar(ta);
	putchar('\n');
	return (0);
}
