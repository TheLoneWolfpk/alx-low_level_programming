#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%lu is zero\n", n);
	else if (n > 0)
		printf("%lu is postive\n", n);
	else
		printf("%lu is negative\n", n);
	return (0);
}
