#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	if (len != 0)
	{
		while (len > 0)
		{
			_putchar(*(s + (len - 1)));
			len--;
		}
	}
	_putchar('\n');

}

/**
 * _strlen - gets lenght of a string
 * @s: string
 *
 * Return: always len
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
	len++;
	s++;
}

return (len);
}
