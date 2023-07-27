#include "main.h"
/**
 * leet - encodes a sting into 1337
 * @s: string array
 * Return: string array
 */
char *leet(char *s)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 109};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int nummbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
