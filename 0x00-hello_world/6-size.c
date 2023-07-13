#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char a: %lu byte(s)\n", sizeof(char));
	printf("Size of int b: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int c: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int d: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float f: %lu byte(s)\n", sizeof(float));
	return (0);
}
