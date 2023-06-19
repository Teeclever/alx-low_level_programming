#include <stdio.h>
/**
 * main - enter program that prints all possible combination of two digit
 * Return: always 0 (succes)
 */

int main(void)
{
	int a;

	int y;

	for (a = 48; a <= 56; a++)
{
	for (y = 49; y <= 57; y++)
{
	if (y > a)
{
	putchar(a);
	putchar(y);
	if (a != 56 || y != 57)
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
