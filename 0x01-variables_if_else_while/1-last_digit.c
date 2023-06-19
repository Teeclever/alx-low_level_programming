#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  The entry point to the last digit of the randoom number
 * Return: ALways 0 (successor)
*/

int main(void)
{
	int n;

	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	printf("Last digit of %d is %d", n, t);
	if (t > 5)
		printf(" and is greater then 5\n");
	else if (t == 0)
		printf(" and is 0\n");
	else if (t < 6 && t != 0)
		printf(" and is less then 6 and not 0\n");
	return (0);
}
