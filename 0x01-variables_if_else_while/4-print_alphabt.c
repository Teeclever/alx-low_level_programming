#include <stdio.h>

/**
 * main - entry to a program that print alphabet in lowercase excluding q and e
 * Return: alway 0 (success)
 */

int main(void)
{
	char ta;

	ta = 'a';
	while (ta <= 'z')
{
	if (ta != 'e' && ta != 'q')
{
	putchar(ta);
}
	ta++;
}
	putchar('\n');
	return (0);
}
