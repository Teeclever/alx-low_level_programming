#include <stdio.h>

/**
 * main - entry to a program that print lowercase  alphabet in reverse
 * Return: always 0 success
 */

int main(void)
{
	char tee;

	for (tee = 'z'; tee >= 'a'; tee--)
{
	putchar(tee);
}
	putchar('\n');
	return (0);
}
