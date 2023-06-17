#include <stdio.h>
#include <unistd.h>
/**
 * main - a c program that print a line to the standard error
 * Return: always 1 (successor)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
