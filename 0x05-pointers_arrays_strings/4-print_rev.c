#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int loni = 0;

int o;
while (*s != '\0')
{
loni++;
s++;
}
s--;
for (o = loni; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
