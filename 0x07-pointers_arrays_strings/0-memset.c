#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: memory pointer
 * @b: character
 * @n: number of characters to be printed
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
