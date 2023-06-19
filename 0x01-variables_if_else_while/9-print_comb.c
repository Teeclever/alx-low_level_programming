#include <stdio.h>

/**
 * main - entry program that print all possible combinations of single-digit
 * Return: always 0 (succes)
 */

int main(void)
{
	int tee;

	for (tee = 48; tee < 58; tee++)
{
	putchar(tee);
	if (tee != 57)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
