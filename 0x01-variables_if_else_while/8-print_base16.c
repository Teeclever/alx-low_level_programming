#include <stdio.h>
/**
 * main - entry program that prints all the numbers of base 16 in lowercase
 * Return: alwayys 0 (success)
 */

int main(void)
{
	int tee;

	char te;

	for (tee = 48; tee < 58; tee++)
{
	putchar(tee);
}
	for (te = 'a'; te <= 'f'; te++)
{
	putchar(te);
}
	putchar('\n');
	return (0);
}
